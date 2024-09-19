#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int m = 0;
	int dau = 1;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float)dau / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
