#include <iostream>

using namespace std;

int main()
{
int number,i,control=1;
cout<<"enter a pozitive number:";
cin>>number;
if(number<2){
    cout<<"please enter a number greater than one\n";
    return 0;
}
for(int i=2;i<=number/2;i++){
    if(number%i==0){
        control=0;
        break;
    }
}
if(control==0)
    cout<<number<<"is not a prime number\n";
else
    cout<<number<<"is a prime number\n";
return 0;
}
