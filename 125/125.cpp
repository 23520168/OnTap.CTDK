#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << a << " " << b << endl;
	return 0;
}