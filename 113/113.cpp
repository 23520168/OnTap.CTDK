#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int ahh;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	cout << "a" << n << " = " << ahh << endl;
	return 0;
}