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
	if ((x <= y) && (y <= z))
		cout << "Bat dang thuc dung!" << endl;
	else
		cout << "Bat dang thuc sai!" << endl;
	return 0;
}