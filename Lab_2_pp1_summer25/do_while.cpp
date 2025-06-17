#include <iostream>
using namespace std;

int main () {
    
    string name;
    cout<< "Введите свое имя :"<<"\n";
    cin>>name;
    int age;
    cout<<" Введите свой возвраст :";
     cin>>age;

     int count = 0;

do {
    cout << age << " В этом возврасте у вас действует отсрочка от армии!"<<endl;
    age++;
    count++;
}
while (count < 4);


 

}