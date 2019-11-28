/*
 * Równanie.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Witaj w C++";
    
    int a;
    int b;
    float x;
    cout << "Podaj liczbę a";
    cin >> a;
    cout << "Podaj liczbę b";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "Podaj wiele rozwiązań";            
            } else {
                cout << " równianie sprzeczne"; 
            }
            
    } else {
        x = -b /(float)a;
        cout << x;
    }
	return 0;
    
}

