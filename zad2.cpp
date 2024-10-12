#include <iostream>
using namespace std;

int main() {

    string msg1 = "Zmienna jest dodatnia!";
    string msg2 = "Zmienna jest ujemna!";
    string msg3 = "Zmienna jest równa zero!";
    string msgError = "To nie jest liczba!";
    int variable;

    //POWTARZAJ BEZ PRZERWY

    while (true) {
        cout << "Podaj liczbę" << endl;
        cout << "> ";
        cin >> variable;

        if (variable == 0) {
            cout << msg3 << endl;
        }else if (variable >= 1) {
            cout << msg1 << endl;
        }else if (variable <= 1) {
            cout << msg2 << endl;
        }else {
            cout << msgError << endl;
            break;
        }
    }
    return 0;
}
