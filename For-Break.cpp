#include <iostream>
#include <cmath>
using namespace std;


int main(){
short int number,i,j,control=1;

cout<<"Enter a number:";
cin>>number;
for(int i=2;i<=number;i++){
    control=1;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0)
            control=2;
        break;
    }
    if(control==1)
        cout<<i<<" ";
}
return 0;

}
