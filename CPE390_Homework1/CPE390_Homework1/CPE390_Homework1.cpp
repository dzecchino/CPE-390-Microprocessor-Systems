#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 10000; i *= 3) {
		cout << i << "  ";
	}
	cout << endl;

	for (int i = 1; i <= 21; i += 2) {
		cout << i << "  ";
	}
	cout << endl;

	int x = 0;
	int sum = 0;
	while (x < 30) {
		x = x + 3;
		sum = sum + x;
	}
	cout << "Sum: " << sum << endl;

	return 0;
}
//I pledge my honor that I have abided by the Stevens Honor System.
//Dominic Zecchino
