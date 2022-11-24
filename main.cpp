#include <iostream>

using namespace std;

int main() {

    float metry;
    char kolor;

    cin >> metry >> kolor;

    if (metry<=20 && metry>0)
        cout << "To jest kawalerka. ";
    else if (metry>20 && metry<=40)
        cout << "To jest małe mieszkanie. ";
    else if (metry>40 && metry<=70)
        cout << "To jest sredniej wielkosci mieszkanie. ";
    else if (metry>70)
        cout << "To jest duze mieszkanie. ";
    else
        cout << "Wartosc nieprawidlowa ";

    if (kolor == 'r')
        cout << "Kolor Czerwony";
    else if (kolor == 'w')
        cout << "Kolor Bialy";
    else if (kolor == 'g')
        cout << "Kolor Zielony";
    else
        cout << "Nieznany Kolor";

    return 0;
}
