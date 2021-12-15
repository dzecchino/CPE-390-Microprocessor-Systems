#include<iostream>
#include<cmath>
using namespace std;
/*
int deltaPower(int a,int b,int c){
	int fun = 1;
	for (int i=0; i < c; i++){
		fun *= (b-a);
	}
	return fun;
}

int main(){
	int answer = deltaPower(3,5,4);
	cout << answer << endl;

	return 0;
}
*/
/*
//void tableOfHypot(leg1, leg2, leg3, leg4, h1, h2, h3, h4){
void tableOfHypot(int leg1, int h1){
	float hypot = 0;
	cout << "     1           2           3          4" << endl;
	cout << "1  ";
	while(h1 <= 4){
		hypot = sqrt((leg1*leg1)+(h1*h1));
		cout << hypot << "    ";
		h1++;
	}
	cout << endl;
	cout << "2   ";
	h1 = 1;
	leg1 = 2;
	while(h1 <= 4){
		hypot = sqrt((leg1*leg1)+(h1*h1));
		cout << hypot << "    ";
		h1++;
	}

	cout << endl;
	cout << "3   ";
	h1 = 1;
	leg1 = 3;
	while(h1 <= 4){
		hypot = sqrt((leg1*leg1)+(h1*h1));
		cout << hypot << "    ";
		h1++;
	}

	cout << endl;
	cout << "4   ";
	h1 = 1;
	leg1 = 4;
	while(h1 <= 4){
		hypot = sqrt((leg1*leg1)+(h1*h1));
		cout << hypot << "    ";
		h1++;
	}


}
*/

void writeTaylor(double x, double c[], int num){
	for(int i=0; i < num; i++){
		c[i] = pow(x, i);
		cout << c[i] << endl;
	}
}

int main(){
	/*
	int leg1 = 1; //, leg2 = 2, leg3 = 3, leg4 = 4;
	int h1 = 1; //, h2 = 2, h3 = 3, h4 = 4;
	cout << "Table of Hypotenuses:" << endl;
	tableOfHypot(leg1, h1);
	//tableOfHypot(leg1, leg2, leg3, leg4, h1, h2, h3, h4);

	return 0;
	*/

	double c[10];
	double x = 2.5;
	writeTaylor(x, c, 10);
}
