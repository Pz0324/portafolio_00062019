#include <iostream>
using namespace std;

int producto(int, int);

int main()
{
 int n1,n2,p;

 cout << "Digite el primer numero: ";
 cin >> n1;

 cout << "Digite el segundo numero: ";
 cin >> n2;

 p=producto(n1,n2);

 cout << "El resultado es: " << p << endl;


}

int producto(int a, int b)
{
 if(a==0 or b==0)

   return 0;

  else
   {

    return a+producto(a,b-1);

   }
}
