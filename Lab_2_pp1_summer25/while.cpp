#include <iostream>
using namespace std;

int main () {
    string captainofMexico = "Ochao";
    string player;

    bool isCaptain = false;
cout << "Guess the name of captian of Mexico :"<<endl;

while (!isCaptain) {
    cout<< "The name of captian :";
    cin>>player;

    if (player == captainofMexico) {
        cout<< "Congratulations! That's right! "<<"\n";
        isCaptain = true;
    }
    else {
        cout<<"Wrong answer. Try again."<<"\n";
    }
}

    


}