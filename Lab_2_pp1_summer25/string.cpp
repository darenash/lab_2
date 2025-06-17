#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TEAM = 11;

    string barcaPlayers[TEAM] = {
        "Yamal", "Pedri", "Gavi", "Fermin", "Araujo", "Cubarsi",
        "Balde", "Kounde", "Raphinia", "Lewandowski", "Ter Shtegen"
    };

    string name;
    bool found = false;

    cout << "Enter the name of the player: ";
    getline(cin, name);

    for (int i = 0; i < TEAM; i++) {
        if (name == barcaPlayers[i]) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << name << " is a Barca player " << endl;
    } else {
        cout << name << " is NOT a Barca player " << endl;
    }

    return 0;
}
