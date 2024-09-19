#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float y;
	cout << "Nhap y: ";
	cin >> y;
	float z;
	cout << "Nhap z: ";
	cin >> z;
	if ((x + y > z) && (y + z > x) && (x + z > y))
	{
		if (x == y && y == z)
			cout << "La tam giac deu!" << endl;
		else
		{
			if ((x * x + y * y == z * z) || (y * y + z * z == x * x) || (x * x + z * z == y * y))
			{
				if (x == y || y == z || z == x)
					cout << "La tam giac vuong can!" << endl;
				else
					cout << "La tam giac vuong!" << endl;
			}
			else
			{
				if (x == y || y == z || z == x)
					cout << "La tam giac can!" << endl;
				else
					cout << "La tam giac thuong!" << endl;
			}
		}
	}
	else
		cout << "Khong la tam giac!" << endl;
	return 0;
}