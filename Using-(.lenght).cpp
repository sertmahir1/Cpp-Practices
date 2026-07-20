#include <iostream>
#include<string>

using namespace std;

int main()
{
string fullname;
cout<<"Enter your fulLname;\n";
getline(cin,fullname);
if(fullname.length()<5){
    cout<<"This failed cannot be less than 5 characters\n";
    cout<<"The length:"<<fullname.size()<<"\n";
}
else{
    cout<<"your name is:"<<fullname<<"\n";

}

}
