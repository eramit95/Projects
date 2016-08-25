#include<iostream>
using namespace std;
int main()
{
  int a,b=1;
  cin >> a;
  for(int i = 0 ; i< a; i++){
  b = 1-b;
  }
  if(b == 1){
   cout << "EVEN" << endl;
  }
  else{
   cout << "ODD" << endl;
  }
  return 0;
}
