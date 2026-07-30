#include<iostream>

using namespace std;

//kullanıcıdan 3 tam sayı alınsın ve bu alınan tam sayılar birbirleleri arasında karşılaştırılsın küçük olan ekrana yazdırılsın:

int main(){

int num1,num2,num3;
 cout<<"Sayilari giriniz:";
 cin>>num1>>num2>>num3;
 if(num1<num2 && num1<num3){
    cout<<"En kucuk sayı:"<<num1<<endl;
 }

 else if(num2<num1 && num2<num3){
 cout<<"En kucuk sayi:"<<num2<<endl;
 }

 else if(num3<num1 && num3<num2){
        cout<<"En kucuk sayı:"<<num3<<endl;
 }
 return 0;
}
