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
	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + (i+1) * t;
		i = i + 1;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
