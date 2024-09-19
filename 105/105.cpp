#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	float e = 0.5;
	int m = 0;
	int i = 1;
	while (e >= 0.000001)
	{
		m = m + i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	cout << "Sn = " << s << endl;
	return 0;
}