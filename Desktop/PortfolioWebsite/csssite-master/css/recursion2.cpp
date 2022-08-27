#include <iostream>
using namespace std;

int power( int n)
{
    if(n==0)
    return 1;

    int problem = 2 * power(n-1);
    return problem;

}

int main()
{

int n;
cout<< "Enter a number" << endl;
cin>>n;
int ans = power(n);
cout<<ans<<endl;

}
