#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float xx = (x * 3.14) / 180;
	float s = xx;
	float t = xx;
	int m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e >= 0.000001)
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "cos(" << x << ") = " << s << endl;
	return 0;
}