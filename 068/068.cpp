#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * i;
		s = s + t;
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
