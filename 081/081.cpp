#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x+i);
		s = s + (float)1 / m;
		i = i + 1;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
