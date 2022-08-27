#include <iostream>
using namespace std;
 int counting (int n)
 {
     //Base class
     if(n==0)
     return 1;
     
     //Recursive relation
     cout<<n<<endl;
     counting(n-1);
 }
 
 int main()
 {
     int n;
     cout<<"Enter n" << endl;
     cin>>n;
     counting(n);
     
     return 0;
     
     
 }