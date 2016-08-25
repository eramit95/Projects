#include<iostream>
using namespace std;

int main()
{
  int* fact;
  int a = 1; 
  cout << "Enter a value";
  cin >> *fact;
  for(int i = 1; i<= *fact; i++)
	a = a*i;
  cout << a << endl;
  return 0;


}
