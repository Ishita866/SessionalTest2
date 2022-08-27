#include <iostream>
using namespace std;

void reverse( string &s, int i, int j)
{
    //base case
    if(i>j)
    return;
        //Recursive call
        swap(s[i],s[j]);
        i++;
        j--;
        reverse(s,i,j);
       // cout<<s<<endl;
   
}

int main() {
    string s ="Ishita";
    reverse(s, 0, s.length()-1);
    cout<<s<<endl;
    return 0;
}