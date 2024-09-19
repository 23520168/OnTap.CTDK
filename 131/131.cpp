#include <iostream>
using namespace std;

int main()
{
	float xA;
	cout << "Nhap xA: ";
	cin >> xA;
	float yA;
	cout << "Nhap yA: ";
	cin >> yA;
	float xB;
	cout << "Nhap xB: ";
	cin >> xB;
	float yB;
	cout << "Nhap yB: ";
	cin >> yB;
	float xC;
	cout << "Nhap xC: ";
	cin >> xC;
	float yC;
	cout << "Nhap yC: ";
	cin >> yC;
	float a = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	float c = sqrt((xC- xB) * (xC - xB) + (yC - yB) * (yC - yB));
	if (a + b > c && b + c > a && a + c > b)
		cout << "La tam giac!" << endl;
	else
		cout << "Khong la tam giac!" << endl;
	return 0;
}