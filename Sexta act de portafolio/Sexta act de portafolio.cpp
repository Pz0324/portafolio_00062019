#include<iostream>
using namespace std;

int main(){
	
	int numeros[] = {1,3,4,5,17,18,31,33};
	int inf,sup,mitad,dato;
	char band = 'F';
	
	cout<<"Ingrese el numero a buscar :"; cin>>dato;
	
	inf = 0;
	sup = 8;
	
	while(inf <= sup){
		mitad= (inf + sup)/2;
		
		if(numeros[mitad] == dato){
			
			band = 'V';
			break;
		}
		if(numeros[mitad] > dato){
			
			sup=mitad;
			mitad = (inf + sup)/2;
		}
		
		if(numeros[mitad] < dato){
			inf = mitad;
			mitad= (inf + sup)/2;
		}
	}
	
	if(band == 'V'){
		cout<<"EL numero ha sido encontrado en la posicion: "<<mitad<<endl;
	}
	else{
		cout<<"El numero no ha sido encontrado" <<endl;
	}
	return 0;
}
