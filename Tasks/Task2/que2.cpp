#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int max = (a > b) ? a : b;
    int lcm = max;
    while(lcm % a != 0 || lcm % b != 0) {
        lcm += max;
    }
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm;

 return 0;
}