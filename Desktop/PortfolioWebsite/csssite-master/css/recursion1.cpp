#include <iostream>
using namespace std;

int factorial (int n)
{
    //Base class
    if(n==0)
    return 1;
    
    //Recursive relation
    int biggerproblem = n * factorial (n-1);
    return biggerproblem;
}

int main()
{
    int n;
     cout<<"Enter a number" << endl;
     cin>>n;
     int ans = factorial(n);
     cout<<ans<<endl;
}