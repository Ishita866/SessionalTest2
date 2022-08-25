#include <iostream>
using namespace std;

int main()
{
    int i,j,count; int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    
    //Enter elements in the array
    for(i=0;i<size;i++){
        cout<<"Enter array elements"<<endl;
        cin>>arr[i];
    }
        
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
    }
    if(count==1){
     cout<<" "<<arr[i];
}

return 0;
}