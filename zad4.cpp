#include <iostream>
using namespace std;

int main() {

    int number1, number2, number3;

    //POBIERZ CYFRY

    cout << "Podaj liczby: " << endl;
    cout << "> ";
    cin >> number1;
    cout << "> ";
    cin >> number2;
    cout << "> ";
    cin >> number3;

    //PORÓWNAJ CYFRY

    if(number1 >= number2
        & number1 >= number3) {
        cout << "Największa liczba: " << number1;
        //jeśli pierwsza jest większa od drugiej i trzeciej
    }
    else if(number2 >= number1
        & number2 >= number3){
        cout << "Największa liczba: " << number2;
        //jeśli druga jest większa od pierwszej i druga jest więkssza od trzeciej
        }
    else
        cout << "Największa liczba: " << number3;
         //w przeciwnym wypadku trzecia jest największa

    return 0;
}