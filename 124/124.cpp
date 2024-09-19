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
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "a" << n << " = " << ahh << endl;
	cout << "b" << n << " = " << bhh;
	return 0;
}