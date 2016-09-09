
#include<iostream>
using namespace std;


int main() {
	int i;
	float n;
	float valor;
	cout << "ingrese un numero" << endl;
	cin >> n;
	cout << "tabla de multiplicar" << n << endl;
	for (i=1;i<=20;i++) {
		valor = n*i;
		cout << n << "*" << i << "=" << valor << endl;
	}
	return 0;
}

