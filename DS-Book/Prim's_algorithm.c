#include <stdio.h>
#include <limits.h>

#define V 5

int minKey(int key[],bool mstset[])
{
	int min = INT_MAX,min_index;
	for(int v=0; v < V; v++)
	if(mstset == false && key[v] < min)
		min = key[v],min_index = v;
	
	return min_index;
}