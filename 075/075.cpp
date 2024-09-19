#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1;
	int t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
