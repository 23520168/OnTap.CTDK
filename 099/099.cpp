#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = pow(s + i, (float)1 / (i + 1));
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
