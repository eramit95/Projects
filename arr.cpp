#include<iostream>
using namespace std;
int main()
{
  int a[10] = {2,3,4,2,567,231,895,123,645,0};
  int max = a[0], smax;
  for(int i = 1; i < 10; i++){
   if(max < a[i]){
    smax = max;
    max = a[i];
  }
  else if(smax < a[i]){
    smax = a[i];
  }
  }
  cout << smax;
  return 0;
}
