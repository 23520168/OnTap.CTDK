#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 1 - x;
	int m = 1;
	int t = x;
	int dau = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
