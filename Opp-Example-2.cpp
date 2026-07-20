#include<iostream>
using namespace std;

class Car{
public:
string brand;
string model;
int year;
Car(string b,string m,int y){
brand=b;
model=m;
year=y;
}
};
int main(){
Car c1("Nissan","Juke",2025);
Car c2("Mg","Hs",2024);

cout<<c1.brand<<" "<<c1.model<<" "<<c1.year<<"\n\n";
cout<<c2.brand<<" "<<c2.model<<" "<<c2.year<<endl;
return 0;

}
