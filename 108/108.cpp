#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		t = t * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	cout << "e^" << x << " = " << s << endl;
	return 0;
}