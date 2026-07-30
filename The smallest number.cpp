#include<iostream>

using namespace std;

//kullanýcýdan 3 tam sayý alýnsýn ve bu alýnan tam sayýlar birbirleleri arasýnda karþýlaþtýrýlsýn küçük olan ekrana yazdýrýlsýn:

int main(){

int num1,num2,num3,temp;
 cout<<"Sayilari giriniz:";
 cin>>num1>>num2>>num3;
 if(num1<num2 && num1<num3){
    cout<<"En kucuk sayý:"<<num1<<endl;
 }

 else if(num2<num1 && num2<num3){
 cout<<"En kucuk sayi:"<<num2<<endl;
 }

 else if(num3<num1 && num3<num2){
        cout<<"En kucuk sayý:"<<num3<<endl;
 }
 return 0;
}
