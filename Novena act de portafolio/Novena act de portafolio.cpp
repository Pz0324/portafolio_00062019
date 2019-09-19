#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	s.push(1);	
	s.push(2);	
	s.push(3);	
	s.push(4);	
	s.push(8);
	s.push(10);
	
	
	cout << "El elemento top es: " << s.top() << endl;

	s.pop();	
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();	

	if (s.empty())
		cout << "La pila esta vacia\n";
	else
		cout << "La pila no esta vacia\n";

	return 0;
}
