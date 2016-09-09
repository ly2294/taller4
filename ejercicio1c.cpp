
#include<iostream>
using namespace std;
int main() {
	int impar;
	int n;
	int suma;
	float sumaimpar;
	sumaimpar = 0;
	n = 1;
	while (sumaimpar<=50) {
		if (n%2==1) {
			cout << sumaimpar << "+" << n << "=" << sumaimpar+n << endl;
			sumaimpar = sumaimpar+n;
		}
		n = n+1;
	}
	cout << " la sumatoria de los impares del 1-50 es" << sumaimpar << endl;
	return 0;
}
