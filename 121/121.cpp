#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ft = 1;
	int ftt = 1;
	int i = 2;
	int fhh;
	while (i <= n)
	{
		fhh = ftt + ft;
		i++;
		ft = fhh;
	}
	cout << "f" << n << " = " << fhh << endl;
	return 0;
}