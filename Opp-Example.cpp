#include<iostream>
#include<string>

using namespace std;

class Car{
public:
    int number1;
    string myColor;
    string myName;
    void drive(){
    }
        void brake (){
    }
};
int main(){
Car toyota;
toyota.number1=70;
toyota.myColor="Blue";
toyota.myName="Toyota";

cout<<"Weigth:"<<toyota.number1<<endl;
cout<<"Color:"<<toyota.myColor<<endl;
cout<<"Name:"<<toyota.myName<<endl;
cout<<"------------\n";

Car skoda;
skoda.number1=80;
skoda.myColor="Yellow";
skoda.myName="Skoda";

cout<<"weigth:"<<skoda.number1<<endl;
cout<<"Color:"<<skoda.myColor<<endl;
cout<<"Name:"<<skoda.myName<<endl;

return 0;
}
