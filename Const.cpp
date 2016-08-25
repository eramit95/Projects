#include<iostream>
using namespace std;
int func1(int);
int func2(int *);
int main(){
	const int c= 10;
	int j = func1(c);
	int k = func2(&c);
}
int func1(int a){return a++;}

int func2(int* ap){return (*ap)++;}
