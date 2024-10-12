#include <iostream>
using namespace std;

int main() {

    cout << "=============" << endl;
    cout << "Czy parzysta?" << " " <<  endl;
    cout << "=============" << endl;

    string msg1 = "Zmienna jest parzysta!";
    string msg2 = "Zmienna jest nieparzysta!";
    string msg3 = "Zmienna jest równa 0!";

    int variable;

    //SPRAWDZAJ BEZ PRZERWY

    while (true) {
        cout << "Podaj liczbę" << endl;
        cout << "> ";
        cin >> variable;

        if(variable == 0){
            cout << msg3 << endl;
        }else {
            if (variable % 2 == 0) {
                cout << msg1 << endl;
            }
            else{
                cout << msg2 << endl;
            }
        }

    }
    return 0;
}
