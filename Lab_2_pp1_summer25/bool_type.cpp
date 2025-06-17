#include <iostream>
using namespace std;

int main () {
    string name;
    int attempts = 3;
    bool guessCorrectly = false;
    
    
 cout<<"Кто является президентом футбольного клуба Барселона на данный момент? У вас 3 попытки. "<<"\n";

    do {
        cout<<"Попытка №"<< (4 - attempts)<< ":";
        getline(cin,name);

        if (name == "Жоан Лапорта") {
            guessCorrectly = true;
            cout<< "true" <<"\n";
            cout << "Вы ответили верно!" << "\n";
            break;
        }
        else{
            cout<<"false"<<"\n";
        }
       
    
     attempts --;

    }

  while (attempts > 0);

    if (!guessCorrectly){
        cout<<"К сожалению, вы не угадали ни разу за 3 попытки."<<"\n";
        cout<<"Удачи в следующий раз!"<<"\n";
    }
    

    
}