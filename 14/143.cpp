#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	while (i<n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		cout << "La so hoan thien!" << endl;
	else
		cout << "Khong la so hoan thien!" << endl;
	return 0;
}