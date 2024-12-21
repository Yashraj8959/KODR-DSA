#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    int a=0,b=1,c;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;

    }
 return 0;
}