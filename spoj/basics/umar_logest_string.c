#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  
  // prompt:
  printf("please enter a string:");

  // get input
  size_t linelen = 500;  
  char* line = (char*) malloc(linelen);
  if (getline(&line, &linelen, stdin) == -1) {
    printf("Error: no input\n");
    return -1;
  }

  // these are used to track which is the longest
  char* currLongestStart = line;  // points to the start of the substring
  size_t currLongestLen = 1;    // how long the substring is

  // find the longest
  while (*line) {
    char* temp = line++;
      
    // while the next letter is lower in the alphabet
    while (*line && *(line-1) <= *line) {
      line++;
    }
    // if the new one is longer
    if ((line - temp) > currLongestLen) {
      currLongestStart = temp;
      currLongestLen = (line - temp);

    // if they have the same length pick the one with the first letter
    } else if ((line - temp) == currLongestLen && *temp < *currLongestStart) {
      currLongestStart = temp;
      currLongestLen = (line- temp);
    }
  }

  // print the output
  printf("%.*s\n", currLongestLen, currLongestStart);

}