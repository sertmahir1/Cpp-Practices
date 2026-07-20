#include <iostream>

using namespace std;

int main()
{
int number1,number2;
cout<<"enter number1;\n";
cin>>number1;
cout<<"enter number 2;\n";
cin>>number2;
if(number1>number2){
    cout<<"number1-number2:"<<number1-number2<<"\n";
}
    else if(number1<number2){
        cout<<"number1+number2:\n"<<number1+number2<<"\n";
    }
else{
    cout<<"number1*number2:"<<number1*number2<<"\n";
}
return 0;
}
