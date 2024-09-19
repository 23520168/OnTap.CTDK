#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int n = x;
	bool dk1 = ((n % 4 == 0) && (n % 100 != 0));
	bool dk2 = n % 400 == 0;
	if (dk1 != 0 || dk2 != 0)
		cout << "La nam nhuan!" << endl;
	else
		cout << "Khong la nam nhuan!" << endl;
	return 0;
}