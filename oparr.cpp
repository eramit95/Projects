#include<iostream>
using namespace std;
void Input_arr(int*);
void Print_arr(int *, int);
void Sort(int*, int);
void Reverse_arr(int * , int);
int main()
{
int arr[10];
Input_arr(arr);
//Print_arr(arr, 10);
Reverse_arr(arr, 10);
Print_arr(arr, 10);
//Sort(arr, 10);
//Print_arr(arr, 10);
return 0;
}

void Input_arr(int *a){
 cout << "Input 10 intigers" << endl;
 for(int i =0; i<10; i++)
  cin >> a[i];
 }
void Print_arr(int *a, int size){
 for(int i = 0; i < size; i++){
  cout << a[i] << endl;
}
}
void Sort(int *arr, int size){
 for(int i =0; i<size ; i++){
  for(int j = i; j< size; j++){
   if(arr[i] > arr[j]){
     int t = arr[i];
     arr[i] = arr[j];
     arr[j] = t;
  }
 }
}
}
void Reverse_arr(int * a, int size){
  for(int i =0, j =size-1; i<size/2, j>=size/2; i++, j--){
   int temp = a[i];
   a[i] = a[j];
   a[j] = temp;

}
}
