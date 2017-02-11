#!/usr/bin/env python
height = 3
if __name__ == '__main__':
    print(r'./\.')
    for i in range(0, height+1):
        if i != 0 and i != 1:
            print(r'/' + '.'*i + '\\')

    for i in range(height, 0, -1):
        if i != 0 and i != 1:
            print('\\' + '.'*i + r'/')

    print('.\/.')