#!/usr/bin/env python
# -*- coding: utf-8 -*-

def main(args):
    m = n = 0
    while m < 1:
        m = int(input("Podaj liczbę m: "))
    while n < 1 or n < m :
        n = int(input("Podaj liczbę n: "))
   # if n > 0 and m > 0 and n > m:
        for i in range(m, n + 1):
            print(i," ",end = " ") 
    else:
        print("Podaj liczbę większą niż 0 !! ")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
