#include <iostream>
#include <string>
using namespace std;

int main () {
    const int size = 6;
    string candidate [size] = {"Fermin", "Olmo", "Gavi", "Casado","Bernal","Pablo Torre"};
    string start;
    string sub;
    bool startFound = false;
    bool subFound = false;

    cout<<"Barcelona have 6 young midfielders :" << "\n";
    
    for (int i = 0; i<size; i++){
         cout << "- " << candidate[i] << endl;
    }

    cout<< "Choose one player to start :" << "\n";
    getline(cin,start);

    cout<<"Choose one player to sub :"<<"\n";
    getline(cin,sub);

    if (start == sub) {
        cout<< "You can not choose the same player for 2 positions "<<endl;
        cout<< "be attentive" <<endl;
        return 0;
    }
   
    for (int i = 0; i<size;i++) {
        if (start == candidate[i]){
            startFound = true;
        }
        if (sub == candidate[i]){
            subFound = true;
        }
    }
    cout << "You have made next choises :"<<endl;
    cout << start<< " " << "in the starting 11" << endl;
    cout << sub << " " << "on the bench" << endl;


    int loans = 0;
    int sales = 0;

    for (int i = 0; i<size;i++) {
        if (candidate[i] != start && candidate[i] != sub){
            if (loans < 2){
                cout<<"to loan :"<< " "<<candidate[i]<<endl;
                loans++;
            }
            else {
                cout<<"to sale :"<< " " << candidate[i] << endl;
                sales++;
            }
        }
    }
}
