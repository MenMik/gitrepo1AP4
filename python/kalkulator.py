#!/usr/bin/env python
# -*- coding: utf-8 -*-
    
    
def pobierzliczbe1():
    liczba1 = int(input("Podaj pierwszą liczbę: "))
    return liczba1 

def pobierzliczbe2():
    liczba2 = int(input("Podaj drugą liczbę: "))
    return liczba2
    
def dodawanie():
    liczba1 = pobierzliczbe1()
    liczba2 = pobierzliczbe2()
    suma = liczba1 + liczba2
    print(suma)

def odejmowanie():
    liczba1 = pobierzliczbe1()
    liczba2 = pobierzliczbe2()
    roznica = liczba1 - liczba2
    print(roznica)

def dzielenie():
    liczba1 = pobierzliczbe1()
    liczba2 = pobierzliczbe2()
    iloraz = liczba1 / liczba2
    print(iloraz)

def mnożenie():
    liczba1 = pobierzliczbe1()
    liczba2 = pobierzliczbe2()
    iloczyn = liczba1 * liczba2
    print(iloczyn)



def main(args):
    op = input(" Podaj operacje jaką chcesz wykonąć +, -, /, *: ")
    if op == "+":
        dodawanie()
    elif op == "-":
        odejmowanie()
    elif op == "/":
        dzielenie()
    elif op == "*":
        mnożenie()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
