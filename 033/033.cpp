#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)i /(i + 1);
		i = i + 1;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}
