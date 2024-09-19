#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int bt = 1;
	int i = 2;
	int ahh, bhh;
	while (i <= n)
	{
		ahh = 3*bt+2*at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "a" << n << " = " << ahh << endl;
	cout << "b" << n << " = " << bhh;
	return 0;
}