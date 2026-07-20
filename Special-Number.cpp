#include <iostream>

using namespace std;

int main()
{
    short int number,result,ab,cd;
    cout<<"Enter a number:";
    cin>>number;
    ab=number/100;//bölüm bize ab sayısını vericek.
    cd=number%100;//kalan bize cd sayısını vericek.
    result=(ab+cd)*(ab+cd);
    if(number==result)
    {
      cout<<"This is a special number!\n";
    }
    else
    {
        cout<<"This is a not special number!\n";
    }
return 0;

}
