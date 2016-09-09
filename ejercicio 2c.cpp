#include<iostream>
using namespace std;



int main() {
	float fact;
	float i;
	float n;
	cout << "ingresar numero" << endl;
	cin >> n;
	fact = 1;
	for (i=1;i<=n;i++) {
		fact = fact*i;
	}
	cout << "el factorial es" << fact << endl;
	return 0;
}

