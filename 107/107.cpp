#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float xx = (x * 3.14) / 180;
	float s = 1;
	float t = 1;
	int m = 1;
	int dau = -1;
	float e = 1;
	int i = 2;
	while (e >= 0.000001)
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "sin(" << x << ") = " << s << endl;
	return 0;
}