#include<iostream>
#include<map>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter secont string: ";
    cin>>str2;
    map<char,int> freq1;
    map<char,int> freq2;

    for(auto i: str1){
        freq1[i]++;
    }
    for(auto i: str2){
        freq2[i]++;
    }
    if (freq1 == freq2) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

 return 0;
}