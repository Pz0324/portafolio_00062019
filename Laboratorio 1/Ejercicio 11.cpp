#include<iostream>
using namespace std;

int main(){
	int numeros[100],n,mayor=0;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<" Digite un numero: ";
		cin>>numeros[i];
		
		if(numeros[i] > mayor){ 
			mayor = numeros[i]; 
		}
	}
	
	cout<<"\nEl mayor elemento del arreglo es: "<<mayor<<endl;
	
	
	return 0;
}
