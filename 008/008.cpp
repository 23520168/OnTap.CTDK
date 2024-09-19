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
	float p = 2 * n * r * sin(3.14 / n);
	cout << "p = " << p << endl;
	return 0;
}