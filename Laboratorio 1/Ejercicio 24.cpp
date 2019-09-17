#include<iostream>
#include<math.h>
#include<fstream>
#include<string>
using namespace std;

struct complejo{
float real,imaginario;
}
z1;

float a,b,a2,b2,r, z;
void pedirdatos();
void proceso();

int main(){
    cout<<"valor absoluto de un complejo forma rectangular (a+bi) "<<endl;
    pedirdatos();
    proceso();
    

    return 0;
}

void pedirdatos(){
    cout<<"Digite el valor de a"<<endl;
    cin>>z1.real;
    cout<<"Digite el valor de b"<<endl;
    cin>>z1.imaginario;
}

void proceso(){

a2 = pow(z1.real,2);
b2= pow(z1.imaginario,2);
r = sqrt(a2 + b2);
cout<<r;

}
