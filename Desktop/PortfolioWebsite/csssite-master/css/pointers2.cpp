#include <iostream>
using namespace std;

int main()
{
     int a[20] = {1,5,6,2};
    // error
    //a=a+1;
    // cout<< a << endl;
    // cout<< " ->" << &a[0] << endl;
    // cout<< &a[0] << endl;
    // cout<< &a << endl;
    // cout<< a << endl;
     
     int *p = &a[0];
     p=p+1;
     cout << p << endl;
     //cout<< " ->" << &p<< endl;
    // cout<<"value of p:"<< p <<endl;
    // cout<< "value of *p:"<< *p <<endl;
     //cout<< "value of &p:"<<&p <<endl;
     
}