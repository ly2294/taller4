#include<iostream>
using namespace std;
int main() {
	float fact;
	int i;
	float n;
	cout << " digite un numero" << endl;
	cin >> n;
	fact = 1;
	if (n>=0) {
		for (i=1;i<=n;i++) {
			fact = fact*i;
		}
		cout << "el factorial es" << fact << endl;
	} else {
		cout << " no es un numero factorial" << endl;
	}
	return 0;
}
