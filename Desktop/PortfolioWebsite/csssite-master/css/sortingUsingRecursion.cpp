#include <iostream>
using namespace std;

 bool isSorted (int *arr, int size)
 {
     //base case
     if(size==0 || size == 1)
     return true;
 
     
     if(arr[0] > arr[1])
     return false;
     else { 
     bool restPart=isSorted(arr+1, size-1);
     return restPart;
          }
 }
 
  int main()
  {
       int arr[] = {1,2,4,3,7};
       int size =5;
       bool ans = isSorted ( arr, size);
       
       if (ans)
       {
           cout<<"Array is sorted"<<endl;
           
       }
       else
       cout<<"Array is not sorted"<<endl;
  }