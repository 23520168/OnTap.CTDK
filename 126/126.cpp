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
	float lc = a;
	if (b > lc)
		lc = b;
	cout << "So lon nhat la: " << lc << endl;
	return 0;
}