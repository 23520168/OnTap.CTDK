#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	cout << "So uoc so la: " << dem << endl;
	return 0;
}
