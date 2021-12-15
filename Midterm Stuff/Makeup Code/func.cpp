#include<iostream>
using namespace std;
/*
int mean(int a, int b){
  int sum = 0;
  for (int i=0; i<b; i++){
    sum += a[i];
  }
  return sum/(b*1.0);
}
*/
void eval(int c, int b, int x){
  str string = ''
    for (int i = 0; i <= 1; ){
      string = c[i]*(x^b) + c[i+1]*(x^(b-1)) + c[i+2]*(x^(b-2))
    }
    cout << string << endl;
  //I realize this code is completely off but I
  //ran out of time on the first part
  //due to some error
}
/*
int main(){
//int a[] = {1, 2, 3, 4};
//double m = mean(a, 4);
//cout << m << '/n';
double c[] = {3.0, 1.0, 2.0};
double x = 1.5;
double p = eval(c, 3, x)

}
