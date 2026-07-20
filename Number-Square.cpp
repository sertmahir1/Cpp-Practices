#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int number,result;
   cout<<"Enter a number:";
   cin>>number;
   if(number<0)
   {
       cout<<"please enter a pozitive number or zero!";
   }
   else
   {
       result=sqrt(number);
       result*=result;//bir önce ki kodda karekökü alınan sayının girilen sayıya eþit olup olmadığını hesapladık.
       if(result==number)
       {
        cout<<"square root of"<<number<<"is an inteager\n";
       }

       else
        cout<<"The number entreded not a inteager\n";
   }
   return 0;
}
