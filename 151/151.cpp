#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 2;
		if (du % 2 != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << "La dang 2^m!" << endl;
	else
		cout << "Khong la dang 2^m!" << endl;
	return 0;
}