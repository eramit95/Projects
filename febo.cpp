#include<iostream>
using namespace std;
int main()
{
  int a = 0,b=1, c;
  cout << a <<b;
  for(int i = 0; i <=10; i++){
  c = a + b;
  a = b;
  b = c;
  cout << c << endl;
  }
  return 0;
}

