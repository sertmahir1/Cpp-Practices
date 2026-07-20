#include <iostream>

using namespace std;

int main()
{
 char harf;
 int sayi;
 cout<<"noktayla biten 2 cümle giriniz"<<"\n";
 for(int i=1;i<2;i++){
    sayi=0;
    cin>>harf;
    while(harf!='.'){
        if((harf=='A')||(harf=='a'))
            sayi++;
        cin>>harf;

    }
    cout<<i<<".cümlede"<<sayi<<"tane A harfi var."<<"\n";
 }
 return 0;
}
