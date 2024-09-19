#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i++;
	}
	cout << "Tich cac uoc so la: " << t << endl;
	return 0;
}
