#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = -2;
	int i = 2;
	int t = 3;
	int p = 7;
	int ahh;
	while (i <= n)
	{
		t = t * 3;
		p = p * 7;
		ahh = 5 * at + 2 * t - 6 * p + 12;
		i++;
		at = ahh;
	}
	cout << "a" << n << " = " << ahh << endl;
	return 0;
}