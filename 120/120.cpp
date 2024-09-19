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
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	cout << "a" << n << " = " << ahh << endl;
	return 0;
}