#include <iostream>
using namespace std;

int main() {
    string trophies[] = {"La liga", "SuperCopa", "Copa del Rey"};

    int choice;

    cout << "Введите номер трофея (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << trophies[0] << endl;
            break;
        case 2:
            cout << trophies[1] << endl;
            break;
        case 3:
            cout << trophies[2] << endl;
            break;
        default:
            cout << "Неверный номер трофея" << endl;
            break;
    }

    return 0;
}
