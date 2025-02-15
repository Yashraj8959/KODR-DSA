#include<bits/stdc++.h>
using namespace std;
int mergeArr(vector<int>& temp , int st, int mid, int end){
    vector<int> temparr;
    int i = st;
    int j = mid+1;
    int InvCount=0;
    while (i<= mid && j<= end)
    {
        if (temp[i]<=temp[j])
        {
            temparr.push_back(temp[i]);
            i++;
        }
        else {
            temparr.push_back(temp[j]);
            j++;
            InvCount += mid - i +1;
        }
        
    }
    while (i<= mid)
    {
        temparr.push_back(temp[i]);
        i++;
    }
    while (j<=end)
    {
        temparr.push_back(temp[j]);
        j++;
    }

    for (int idx = 0; idx < temparr.size(); idx++)
    {
        temp[idx + st ] = temparr[idx];

    }
    return InvCount;
}
int mergeSort(vector<int>& temp, int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;
        int leftInvCount = mergeSort(temp, st, mid);
        int RightInvCount = mergeSort(temp, mid+1, end);
        int InvCount = mergeArr(temp,st,mid,end);
        return leftInvCount + RightInvCount + InvCount;
    }
    return 0;
}

int main()
{
    vector<int> arr = {6,3,5,2,7};
    int ans = mergeSort(arr, 0 , arr.size()-1);
    cout<<ans;
    return 0;
}