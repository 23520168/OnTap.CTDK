#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int hc = (n / 100) % 10;
	cout << "Chu so hang tram: " << hc << endl;
	return 0;
}