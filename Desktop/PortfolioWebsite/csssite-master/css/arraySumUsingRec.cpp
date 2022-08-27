#include <iostream>
using namespace std;
   
   
   int getsum(int arr[], int size)
   {
       //base case
       if(size==0)
       return 0;
       
       if (size==1)
       return arr[0];
       
       else{
           int rest= getsum(arr+1,size-1);
           int sum=arr[0]+rest;
           return sum;
           }
   }
   
   
   int main() {
       int arr[5]= {1,2,5,6,5};
       int size =5;
       
       int ans= getsum(arr, size);
       
       cout<<"Sum of numbers of array=";
       cout<<ans;
       
       
       
       
   }