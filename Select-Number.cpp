#include <iostream>

using namespace std;

int main()
{
 short int number=1,i=1;
 while(number!=0){ // HER SEFERÝNDE YORUM PENCERÝSÝNÝ KAPAT-AÇ YAPMAMAK ÝÇÝN YAZIYORUZ
     i=1; //Ý YÝ TEKRARDAN 1 DEN BAÞLATIYORUZ KÝ KOD TEKRARDAN ÝF ELSE BLOKLARIMIZA GÝRSÝN! (BU SATIR OLMAZ ÝSE YENÝ SAYI GÝREMEYÝZ)
 cout<<"Enter a number: (1-10) (exit:0)";
 cin>>number;
 if(number<1 || number>10)
 {
     cout<<"Please enter between 1 and 10\n";
 }
 else
 {
     while(i<=10 && number!=0) //SIFIR GÝRÝLDÝÐÝNDE SIFIR ÝLE ÝLGÝLÝ ÇARPIM TAPLOSUNU YAZDIRMAYALIM DÝYE KOYDUK
     {
         cout<<number<<"x"<<i<<"="<<number*i<<"\n";
         i++;
     }
 }
 }

}
