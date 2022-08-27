#include <iostream>
using namespace std;
 int main()
 {
     /* int num=5;
     cout<<num << endl;
     int *p=&num;
   
     cout<< "value is:" <<*p<<endl;;
     cout<< "address is:" <<p<<endl;
      
      
      double d= 2.678;
      double *pt2=&d; // Type of pointer will always be equal to the type variable we'll be using
      cout<< "value is:" <<*pt2<<endl;;
     cout<< "address is:" <<pt2<<endl;
     
     cout<<"size of integer is:"<<sizeof(num) <<endl;
     cout<<"size of pointer is:"<<sizeof(p)<<endl;
     cout<<"size of double is:"<<sizeof(d) <<endl;
     cout<<"size of pointer is:"<<sizeof(pt2)<<endl; */
     
     
     int num=5;
     int *p= &num;
     cout<<"before:"<<num<<endl;
     
     (*p)++;
    cout<<"after:"<<num<<endl;
    
    
    //pointing a pointer
    int *q=p;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    
    //important concept;
    int i=7;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before:"<<t<<endl;
    t=t+1;
    cout<<"after:"<<t<<endl;
     
 }