#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
			cout << "Phuong trinh co vo so nghiem!" << endl;
		else
			cout << "Phuong trinh vo nghiem!" << endl;
	}
	else
	{
		float x = -b / a;
		cout << "x = " << x << endl;
	}
	return 0;
}