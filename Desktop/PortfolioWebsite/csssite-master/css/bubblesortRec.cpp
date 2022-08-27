#include <iostream> 
using namespace std;

void sortArray(int *arr, int n)
{
    //base case
    if(n==0 || n==1)
    return;
    
    //solving 1st case
    for (int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        swap(arr[i],arr[i+1]);
        
    }
    sortArray(arr,n-1);
    
    
}
int main()
{
    int arr[7]={2,7,1,6,8,66,43};
    
   // int n= 7;
   
    
    sortArray( arr,7);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}