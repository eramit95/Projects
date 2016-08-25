#include<iostream>
using namespace std;
int add(int*, int*);
int main()
{
 int a= 10, b = 20;
 cout << add(&a, &b) << endl;
 return 0;
}

int add(int* pa, int* pb)
{
 return (*pa + *pb);
}
