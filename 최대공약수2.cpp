#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	int c, d;
	cin >> c >> d;

	cout << gcd(c, d) << endl;

	return 0;
}

int gcd(int a, int b)
{
	if (b == 0) return a;

	return gcd(b, a%b);
}
//(14,4)(4,14%4)(4,2)(2,4%2)(2,0)
//(5,15)(15,5)(5,0)