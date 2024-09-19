#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int t = x;
	int i = 1;
	while (i <= n)
	{
		t = t * (x + i);
		i = i + 1;
	}
	cout << "S = " << t << endl;
	return 0;
}
