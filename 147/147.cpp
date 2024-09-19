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
	while (t!=0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "La so toan le!" << endl;
	else
		cout << "Khong la so toan le!" << endl;
	return 0;
}