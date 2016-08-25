#include<iostream>
using namespace std;
void Input_arr(char*);
void Print_arr(char *);
void Sort(char*);
void Reverse_arr(char *);
int main()
{
char arr[10];
Input_arr(arr);
//Print_arr(arr);
//Reverse_arr(arr);
//Print_arr(arr);
Sort(arr);
Print_arr(arr);
return 0;
}

void Input_arr(char *a){
 cout << "Input 10 character" << endl;
 for(int i =0; i<10; i++)
  cin >> a[i];
 }
void Print_arr(char *a){
 int i =0;
 while(a[i]){
  cout << a[i] << endl;
  i++;
}
}
void Sort(char *arr){
 int size = 0, i=0;
 while(arr[i]){
  size++;
  i++;
 }
 for(int i =0; i<size ; i++){
  for(int j = i; j< size; j++){
   if(arr[i] > arr[j] ){
     int t = arr[i];
     arr[i] = arr[j];
     arr[j] = t;
  }
 }
}
}
void Reverse_arr(char * a){
 int size = 0, i=0;
 while(a[i]){
  size++;
  i++;
}
  for(int i =0, j =size-1; i<size/2, j>=size/2; i++, j--){
   char temp = a[i];
   a[i] = a[j];
   a[j] = temp;

}
}
