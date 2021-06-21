#include<iostream>

using namespace std;

int main() 
{
	/*
	//Summing from a to b 
	int sum = 0;
	int VarSum = 0;
	int UBound = 0;
	cout << "What number is your lower bound?\n";
	cin >> VarSum;
	cout << "What number is your upper bound?\n";
	cin >> UBound;
	while (VarSum<=UBound) {
		sum += VarSum;
		VarSum += 1;
		
	}
	cout << sum << endl;


	//Multiplying from a to b
	int VarProd = 0;
	int prod = 1;
	int UProd = 0;
	cout << "What is your lower bound for multiplying?\n";
	cin >> VarProd;
	cout << "What is your upper bound for multiplication?\n";
	cin >> UProd;
	while (VarProd <= UProd) {

		prod *= VarProd;
		VarProd++;
	}
	cout << prod << endl;

	
	//Checking for primes
	
	int num, i;
	cout << "Enter a positive integer.\n";
	cin >> num;
	bool isPrime = true;
	for (int i = 2; i <= num; i++) {

		if (num % i == 0) {

			isPrime = false;
		}
		else {
			
			break;

		}
	}
	if (isPrime == true) {
		cout << "This is a prime number.\n";
	}
	else
	{
		cout << "This is not a prime number.\n";
	}


	// Counting the number of primes
	*/
	int LowPrime, UpPrime;
	cout << "What is the lower bound for possible primes?\n";
	cin >> LowPrime;
	cout << "What is the upper bound for possible primes?\n";
	cin >> UpPrime;
	
	int primeCount = 0;

	bool numPrime = true;
	while (LowPrime <= UpPrime) {
		for (int i = 2; i <= LowPrime; i++) {

			if (LowPrime % i == 0) {

				numPrime = false;
			}
			else {
				numPrime = true;
				break;

			}
		}
		if (numPrime == true) {
			primeCount++;
		}
		else
		{
			
		}
		LowPrime++;
	}
	/*
	while (LowPrime <= UpPrime) {
		for (int i = 2; i <= LowPrime; i++) {
			cout << "Lower Prime " << LowPrime << endl;
			cout << "This is i "<< i << endl;
			if (LowPrime % i == 0) {

				cout << "Prime Count " << primeCount << endl;
			}
			else {

				primeCount += 1;
				cout << "Prime Count " << primeCount << endl;
				break;
			}
			cout << "=============\n";
		}
		cout << "**************************\n";
		LowPrime += 1;

	}
	*/
	cout << "The number of primes is: " << primeCount;
	return 0;
}