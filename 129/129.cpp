#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float c;
	cout << "Nhap c: ";
	cin >> c;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	else
	{
		if (a > c)
		{
			int temp = a;
			a = c;
			c = temp;
		}
		else
		{
			int temp = b;
			b = c;
			c = temp;
		}
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}