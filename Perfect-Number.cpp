#include <iostream>

using namespace std;

int main()
{
 int number,i,sum;
 cout<<"Enter a number:";
 cin>>number;
 for(i=1;i<=number/2;i++){ //Bir sayı en fazla kendisinin yarısına bölündüğünden kodumuzu daha fazla yormamak için number/2 yazdık.
    if(number%i==0)
        sum+=i;//Sayı/sayaç'dan kalan 0 (Sıfır) ise sayaç değerimize ekliyoruz.
 }
 if(sum==number)//if ve else bloklarımızın hemen altında tek satırlık kodlar olduğundan curly brackets (Süslü parantez) koymamıza gerek yoktur
    cout<<number<<" is a perfect number!";
 else
    cout<<number<<" is not a perfect number!";
 return 0;
}
