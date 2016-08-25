#include "Complex.h"

int Complex::count =0;

Complex::Complex():i(0), j(0){
count++;
}
Complex::Complex(int p):i(p), j(p){
count++;
}
Complex::Complex(int p, int q):i(p), j(q){
count++;
}
void Complex::Accept(){
	cout << "Please Enter Two Nos."<< endl;
	cin >> i >> j;
}
void Complex::Display()const{
	cout << i <<"+j" << j << endl;
}
// we cant include static here only we use it for declare
int Complex::Increase(){return count;}
