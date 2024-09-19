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
	if (x + y > z && y + z > x && x + z > y)
		cout << "La tam giac!" << endl;
	else
		cout << "Khong la tam giac!" << endl;
	return 0;
}