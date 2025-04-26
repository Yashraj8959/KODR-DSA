#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter is string: ";
    cin>>str;
    int i =0;
    int j= str.length()-1;
    bool isPalindrome = true;

    while (i<j)
    {
        if(str[i]!=str[j]){
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    
    if(isPalindrome) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome";

 return 0;
}