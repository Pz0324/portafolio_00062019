#include<iostream>
using namespace std;

float mediana(int arr[1000],int r){
	
	if((r/2)!=0){
	
		int resultado=(r+1)/2;
			
			
			cout<<"La mediana es: "<<endl;
			float dato=arr[resultado];
			cout<<dato;
		
	}else{
		
		int resultado2=(r/2);
		int resultado3=resultado2+1;
		
		float valor=(arr[resultado2]+arr[resultado3])/2;
		
		
		cout<< "La mediana es: "<<endl;
		cout<<valor;
		
	}
	
	return 0;
}


int main(){
	
	int datos[]={1,2,2,3,3,4,5,6,7,7,8,8,9,10,11,12,15,18};
	
	int tamanio;
	int tamaniotipo;
	int tamaniofinal;
	
	tamanio=sizeof(datos);
	tamaniotipo=sizeof(int);
	
	tamaniofinal=tamanio/tamaniotipo;

	int n=tamaniofinal;
	
	mediana(datos,n);
	
	
	return 0;
}
