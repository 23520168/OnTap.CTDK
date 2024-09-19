#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = (float)(-9*at-24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	cout << "a" << n << " = " << ahh << endl;
	return 0;
}