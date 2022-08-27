#include <iostream>
using namespace std;
 int power (int n)
 {
     //Base class
     if(n==0)
     return 1;
     
     //Recursive relation
     return 2*power(n-1);
 }
 
 int main()
 {
     int n;
     cout<<"Enter n" << endl;
     cin>>n;
     int ans=power(n);
     cout<<ans<<endl;
     
     
 }