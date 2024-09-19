#include <iostream>
using namespace std;

int main()
{
	float s = 4 - 1 / 2 - 1 / 5 - 1 / 6;
	int t = 1;
	float e = 4 - 1 / 2 - 1 / 5 - 1 / 6;
	int i = 1;
	while (e >= 0.000001)
	{
		t = t * 16;
		e = (float)(4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6)) / t;
		s = s + e;
		i = i + 1;
	}
	cout << "pi = " << s << endl;
	return 0;
}