#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	float e = 0.5;
	int i = 1;
	while (e >= 0.000001)
	{
		e = (float)1 / (i * (i + 1));
		s = s + e;
		i = i + 1;
	}
	cout << "Sn = " << s << endl;
	return 0;
}