#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "n la so toan chan" << endl;
	else
		cout << "n khong toan chan" << endl;
	return 0;
}
