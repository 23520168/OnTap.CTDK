#include <iostream>
using namespace std;

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = n * r * r * sin(2 * 3.14 / n) / 2;
	cout << "S = " << s << endl;
	return 0;
}