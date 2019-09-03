#include <iostream>
using namespace std;

int multi(int a , int b){

if (b==0)

   return 0;
if (a==0)

   return 0;
else

return (a + multi(a,b-1));
}

int main(){

int a,b;

cout<<"Ingrese un entero : ";
cin>>a;

cout<<"Ingrese otro entero : ";
cin>>b;
cout<<"El resultado es: "<<multi(a,b)<<endl;
 
 return 0;
}


