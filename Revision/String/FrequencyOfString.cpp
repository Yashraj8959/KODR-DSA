#include<iostream>
#include<map>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    map<char,int> freq;
    for(auto i: str){
        freq[i]++;
    }
    for (auto i :freq)
    {
        cout<<i.first<<": "<<i.second<<endl;
    }
    
 return 0;
}