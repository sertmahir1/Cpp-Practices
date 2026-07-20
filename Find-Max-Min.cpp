#include <iostream>

using namespace std;

int main()
{
int x,y,z,mymax,mymin;
cout<<"Enter three number:\n";
cin>>x>>y>>z;
if(x>y && x>z)
{
    mymax=x;
    mymin=(y<z)? y:z;// y ve z yi kendi kendi aralarında karşılaştır küçük olan hangisi ise onu mymin veriable'na ata.
}
else if(y>x && y>z)
{
    mymax=y;
    mymin=(x<z)? x:z;
}
else
{
    mymax=z;
    mymin=(x>y && x>z)? x:y;
}
cout<<"Maximum number is:"<<mymax<<"\n";
cout<<"Minimum number is:"<<mymin<<"\n";
return 0;
}


