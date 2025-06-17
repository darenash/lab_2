#include <iostream>
#include <cmath>
using namespace std;

int main(){

cout<<"We have RUB, USD, EUR"<<"\n";
cout<<"What currency do you want to exchange KZT for?"<<"\n";

    string value;
    cin>>value;
    if (value == "RUB") {
        double rub = 6.52;
        cout<<"One RUB to KZT equals: " << rub << " KZT " <<endl;
         cout << "What amount do you need in RUB? "<<"\n";
        
        double value_2;
        cin >> value_2;
        double result = rub * value_2;
        cout<< value_2 << " " << "RUB" << " = " << result<< " " << "KZT"<<"\n";

    }

    else if (value == "USD") {
        double usd = 512.57;
        cout<<"One USD to KZT equals : " << usd << " KZT " << "\n"; 
         cout << "What amount do you need in USD? "<<"\n";

          double value_2;
        cin >> value_2;
        double result = usd * value_2;
        cout<< value_2 << " " << "USD" << " = " << result<< " " << "KZT"<<"\n";
    }
    else if (value == "EUR") {
         double eur = 593.60;
         cout<<"One EUR to KZT equals : " << eur <<" KZT " <<"\n"; 
          cout << "What amount do you need in EUR? "<<"\n";
           double value_2;
        cin >> value_2;
        double result =  eur * value_2;
      cout<< value_2 << " " << "EUR" << " = " << result<< " " << "KZT"<<"\n";
    }
    else {
        cout<<"Unknown currency."<<"\n";
        cout<<"Please enter RUB or USD or EUR."<<"\n";
    }


}