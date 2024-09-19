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
	float t = 1;
	int i = 0;
	while (i <= n)
	{
		t = sin(t);
		s = s + t;
		i = i + 1;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
