#include <iostream>
using namespace std;
int main() {
	int a, b;
	do {
		cin >> a >> b;
		if (a != b)
			cout << "different" << "\n";
		else
			cout << "same";
	} while (a != b);
	return 0;
}