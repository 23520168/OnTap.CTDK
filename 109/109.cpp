#include <iostream>
using namespace std;

int main()
{
	float s = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= 0.000001)
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	cout << "e = " << s << endl;
	return 0;
}