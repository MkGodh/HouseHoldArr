#include <iostream>
#include <string>

using namespace std;


int main() {

    string houseHolders[10];
    string surname;

    for (int i = 0; i < 10; i++) {
        cout << "Input household owners: "; cin >> surname;
        houseHolders[i] = surname;
    }
    for (int j = 0; j < 3; j++) {
        int apartments = 0;
        cout << "Please input apartment num: " << "\n"; cin >> apartments;
        if (apartments < 0 || apartments > 10) {
            cout << "Incorrect apartment!";
            break;
        }
        cout << houseHolders[apartments - 1] << "\n";
    }

}
