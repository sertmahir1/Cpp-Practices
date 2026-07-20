 #include <iostream>

using namespace std;

int main()
{
short int x,y,obeb=1,okek,smallnumber,i;
cout<<"Enter two numbers:";
cin>>x>>y;
if(x<y)
    smallnumber=x;
    else
        smallnumber=y;
    for(int i=smallnumber;i>1;i--){
        if((x%i==0) && (y%i==0)){
            obeb=i;
            break;
        }
    }
    if(obeb!=i){
        okek=x*y/obeb;
        cout<<"greatest common diviser(GCD) is"<<obeb<<"\n";
        cout<<"least common multiple (LCM) is"<<okek<<"\n";
    }
    else{
        okek=x*y;
        cout<<"greatest common diviser(GCD) is"<<obeb<<"\n";
        cout<<"least common multiple (LCM) is"<<okek<<"\n";
    }
    return 0;



}
