/*
 * kalkulator.cpp
 */


#include <iostream>
using namespace std;

void dodaj() {
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Suma: " << a + b << endl;
    }

void odejmij() {
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Roznica: " << a - b << endl;
    }

void mnozenie() {
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "iloczyn: " << a * b << endl;
    }      
    
int main(int argc, char **argv)
{
	char operacja;
    cout << "Jakie działanie chce wykonać (+, -, *, /)?" << endl;
    cin >> operacja;
    switch(operacja) {
        case '+':
            dodaj();
        break;
        case '-':
            odejmij();
        break;
        case '*':
            pomnóż();
        break;
        default:
            cout << "Nie rozumiem !" << endl;
        break;
    }    
	return 0;
}

