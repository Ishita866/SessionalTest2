#include <iostream>
using namespace std;

int main()
{
    int i=5;
    int* p= &i;
    int** p2=&p;
    
    cout<<"Sab sahi chl rha h"<<endl;
    
    cout<<"printing p:" <<p << endl;
    cout<<"addrress of p:" <<&p <<endl;
    
    cout<<"*p2:" << *p2 <<endl;
    
    cout<<"value of i:" <<i << endl;
    cout<<"value of i:" <<*p << endl;
    cout<<"value of i:" <<**p2 << endl;
    
}