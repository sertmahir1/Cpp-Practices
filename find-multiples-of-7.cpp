#include<iostream>
#include<locale.h>
using namespace std;

//kullanýcýdan 2 sayý alýnýcak baþlangýc ve bitiþ sayýlarý olarak belirlenecek
//Baþlangýc ve bitiþ sayýlarý arasýnda ki sayýlardan 7 ile bölünenler ekrana yazdýrýlacak.

int main(){
setlocale(LC_ALL,"Turkish");
int snumber, fnumber;

cout<<"Baþlangýc ve bitiþ sayýlarýný giriniz:";
cin>>snumber>>fnumber;

cout<<"Baþlangýc sayýmýz:"<<snumber<<endl;
cout<<"Bitiþ sayýmýz:"<<fnumber<<endl;

while(snumber<fnumber){
    if(snumber%7==0){
        cout<<snumber<<" ";
    }
    snumber++;
}
cout<<endl;
return 0;

}
