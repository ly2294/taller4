#include<iostream>
using namespace std;


int main() {
	float a;
	float i;
	float n;
	float numero;
	float x;
	n = 0;
	x = 1;
	cout << "ingresar un numero" << endl;
	numero = 0;
	cin >> numero;
	for (i=0;i<=numero;i++) {
		cout << n << endl;
		a = x+n;
		n = x;
		x = a;
	}
	return 0;
}

