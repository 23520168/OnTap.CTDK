#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= 0.000001)
	{
		e = (float)4 / i;
		s = s + e * dau;
		i = i + 2;
		dau = -dau;
	}
	cout << "pi = " << s << endl;
	return 0;
}