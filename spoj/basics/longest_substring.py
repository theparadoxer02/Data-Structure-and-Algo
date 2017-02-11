def lstr(string):
    substring = string[0]
    oldsubstring = ''
    for i, char in enumerate(string[1:]):
        if ord(char) >= ord(string[i]):
            substring += char
        else:
            if len(substring) > len(oldsubstring):
                oldsubstring = substring
            substring = char
    print(oldsubstring)

sub = input()
lstr(sub)