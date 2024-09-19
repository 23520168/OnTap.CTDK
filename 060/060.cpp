#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tich = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	cout << "Tich la: " << tich << endl;
	return 0;
}
