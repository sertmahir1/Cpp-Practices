#include <iostream>

using namespace std;

int main()
{
    //FİBBONACİ DİZİSİ.
   int first=1,second=1,third=1,i,number;
   cout<<"Enter a number:";
   cin>>number;
   cout<<"\n1 1 ";
   for(i=1;i<=number-2;i++){
    first=second;
    second=third;
    third=first+second;
    cout<<third<<" ";
   }
   cout<<"\n\n";
   return 0;


}
