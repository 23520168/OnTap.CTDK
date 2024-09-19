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
	int s = x;
	int t = x;
	int i = 3;
	while (i <= 2 * n + 1 )
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
