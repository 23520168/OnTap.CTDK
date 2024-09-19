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
		ahh = (float)(at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	cout << "a" << n << " = " << ahh << endl;
	return 0;
}