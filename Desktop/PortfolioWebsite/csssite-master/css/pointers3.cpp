#include <iostream>
using namespace std;

int main() 
{
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    cout<< arr << endl;
    cout<< ch << endl;
    
    char *c=&ch[0];
    //prints the entire string
    cout<< c << endl;
    
    int *ptr=&arr[0];
    // Prints only address
    cout << ptr << endl;
  
  
  return 0;
}