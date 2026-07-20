#include <iostream>


using namespace std;

int main()
{
//DAiRENiN ALANI VE YARICAPINI BULMA.
const float PI=3.1415;// veriable'ımızın önüne const koyarak onu sabitlemiş olduk herhangi bir PI değiştirme hatasının önüne geçmiş olduk.
float r,area,circumference;
cout<<"Enter the radius:";
cin>>r;
circumference=2*PI*r;
area=PI*r*r;
cout<<"circumference of the circle is"<<circumference<<"\n";
cout<<"area of the circle is"<<area<<"\n";
return 0;



}
