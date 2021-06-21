#include<iostream>

using namespace std;

int sumsq(uint32_t a,uint32_t b) {

	uint32_t lBound = a;
	uint32_t uBound = b;
	uint32_t sum = 0;

	while (lBound <= uBound) {

		sum += pow(lBound, 2.0);

		lBound++;

	}
	cout << "The sum is " << sum << "\n";
	return sum;
}

int prodArray(int arr[], int n) {
	
	
	int prod = 1;

	for (int x = 0; x <= n; x++) {

		prod = prod * arr[x];

	}
	
	return prod;
}

int prodSecondArray(int arr2[], int n) {


	int prod = 1;

	for (int x = 0; x <= n; x++) {

		prod = prod * arr2[x];

	}

	return prod;
}

int main() {
	uint32_t a, b;
	cin >> a;
	cin >> b;

	sumsq(a,b);

	int n = 3;
	int arr[] = { 1, 4, 3, 2 };
	int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1}; 
	int firstProd = prodArray(arr, n);
	int secondProd = prodSecondArray(arr2, n);

	prodArray(arr, n);

	cout << firstProd << "\n";


	
}