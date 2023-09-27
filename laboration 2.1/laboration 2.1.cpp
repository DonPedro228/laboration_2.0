#include <iostream>
using namespace std;

int main() {
	//double z1;
	double z2;
	double a;
	double b;
	cin >> a >> b;
	//z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	z2 = (1 + sin(b) * sin(b)) / (cos(b) * cos(b));
	//cout << "Z1 = " << z1 << endl;
	cout << "Z2 = " << z2 << endl;
	return 0;
}