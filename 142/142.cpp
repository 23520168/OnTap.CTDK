#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dn = 0;
	int t = n;
	while (t!=0)
	{
		int dt = t % 10;
		dn = dn * 10 + dt;
		t = t / 10;
	}
	cout << "So dao nguoc la: " << dn << endl;
	return 0;
}