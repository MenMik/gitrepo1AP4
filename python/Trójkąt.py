#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = int(input("Podaj bok 1:"))
    b = int(input("Podaj bok 2:"))
    c = int(input("Podaj bok 3:"))
    if a + b > c:
        if b + c > a:
            if a + c > b:
                print("Da się zbudować trójkąt! ")
                return 0

    print(" Nie da się !")
    return 0                  


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
