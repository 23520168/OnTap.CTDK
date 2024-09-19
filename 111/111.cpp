#include <iostream>
using namespace std;

int main()
{
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;
	while (e >= 0.000001)
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + e * dau;
		i = i + 2;
		dau = -dau;
	}
	cout << "pi = " << s << endl;
	return 0;
}