#include <iostream>
using namespace std;

void print(int *p)
{
    cout<< *p <<endl;
    cout<< p << endl;
}

void update (int *p)
{
   //p=p+1 won't work
   // p=p+1;
   // cout<< "inside:" << p << endl;
   
   //*p=*p+1 will work
   *p=*p+1;
   cout<< "*p:" << *p;
    
}
int getsum(int arr, int n)
{
   int sum=0;
   for(int i=0; i<n; i++)
   {
       sum+=arr[i];
   }
   return sum;
}

int main() {
    
    int value=5;
    int *p=&value;
    cout<< p << endl;
    
   // print(p);
  
    update (p);
    
        int arr[5]={1,2,3,4,5};
        cout<< "Sum of array is:"  <<getsum(arr,5)<< endl;
    
    return 0;
}