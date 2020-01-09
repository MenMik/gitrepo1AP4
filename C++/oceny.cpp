/*
 * oceny.cpp
 * 
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    float ilosc,ocena,srednia,suma;
    ocena = 0
    cout << "Ile jest ocen: ";
    cin >> ilosc;
    while (ilosc < 1){
        cout << "Ile jest ocen:";
        cin >> ilosc;
    }
    for(int i = 0; i < ilosc; i = i + 1){
        cout << "Podaj ocenę:";
        cin >> ocena;
        while (ocena < 1 or ocena > 1){
            cout << " Podaj dobrą ocenę:";
            cin >> ocena;
    
            }
        suma = suma + ocena;
        }
    srednia = suma / ilosc;
    cout << "średnia:";
    cout << srednia;
    
	return 0;
}

