#include <iostream>

using namespace std;

int main()
{
  int number,i,factorial=1;
  cout<<"Enter a number:";
  cin>>number;
  if(number<0){
    cout<<"please enter number greater than zero!";
  }
    else{
        for(i=number;i>=1;i--){
            factorial*=i;
    }
cout<<number<<"!="<<factorial<<"\n";
    }
     return 0;
  }


