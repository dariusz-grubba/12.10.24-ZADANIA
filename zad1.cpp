#include <iostream>
using namespace std;

int main() {

    //PIERWSZY SPOSÓB

    // string Imie = "Darek";
    // int nrStudent = 32933;
    // string nazwaUczelni = "PJATK";

    // cout << Imie << endl;
    // cout << nrStudent << endl;
    // cout << nazwaUczelni << endl;

    //DRUGI SPOSÓB

    string arr[3] = {"Darek", "s32933", "PJATK"};

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
