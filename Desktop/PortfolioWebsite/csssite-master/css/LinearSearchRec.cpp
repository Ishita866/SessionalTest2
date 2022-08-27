#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size , int k)
{
    //base case
    if(size==0)
    return false;
    if (arr[0]==k)
    return true;
    
    else {
        bool rest= LinearSearch(arr+1,size-1,k);
        return rest;
        
        
    }
}

int main ()
{
    int arr[5]={1,4,6,8,11};
    int size= 5;
    int k=8;
    
    bool ans= LinearSearch( arr,size,k);
    if (ans){
        cout<<"Number is present" <<endl;
    }
    else{
        cout<<"Number is not present" <<endl;
    }
}