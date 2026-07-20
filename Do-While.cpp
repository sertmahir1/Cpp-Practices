#include <iostream>

using namespace std;

int main()
{

    short int number,i=1;
    do{
        i=1;
        cout<<"Enter a number:";
        cin>>number;
        if(number<1 &&number>50)
            break;
        while(i<=number){
            cout<<i<<" ";
            i++;

        }
        cout<<"\n";
    }
    while(number>=1 && number<=50);
    return 0;
}
