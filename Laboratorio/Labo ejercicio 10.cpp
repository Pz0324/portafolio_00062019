#include <iostream>
using namespace std;

int potencia(int x,int y){
	
	int p;
	
	if(y==1){
		
		p=x;
		
	}
	else{
	
	p=x*potencia(x,y-1);
	
	
	}
	return p;
}



int main(){
	
	int x,y;
	
	cout<<"Digite la base: ";
	cin>>x;
	cout<<"Digite la potencia: ";
	cin>>y;
	
	cout<<potencia(x,y);
	
	
	return 0;
	
}
