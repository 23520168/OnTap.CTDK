#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int bcnn = abs(a * b) / (m + n);
	cout << "Boi chung nho nhat la: " << bcnn << endl;
	return 0;
}