#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st-1; 
    int pivot = arr[end];
    for(int j= st; j<end; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);

        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}
void quickSort(vector<int>& arr, int st, int end){
    if(st<end){
        int pivIdx = partition(arr, st , end);
        quickSort(arr,st, pivIdx-1);
        quickSort(arr, pivIdx+1, end);
    }
}
int main()
{
    vector<int> arr = {5,2,6,4,1,3};
    cout<<"Array before quick sort"<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    quickSort(arr, 0, arr.size()-1);
    cout<<"Array after quick sort"<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }


    return 0;
}