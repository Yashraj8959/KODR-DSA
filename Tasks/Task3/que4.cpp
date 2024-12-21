#include<iostream>
using namespace std;
int minValueToBalance(int arr[], int size){
    int leftSum=0, rightSum = 0;
    for (int i = 0; i < size/2; i++)
    {
        leftSum += arr[i];
    }
    for (int i = size/2; i < size; i++)
    {
        rightSum += arr[i];
    }
    
    return ((leftSum>rightSum) ? (leftSum - rightSum) : (rightSum -leftSum));
}
int main()
{
    int arr[]={1,2,1,2,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimun value to balance: "<<minValueToBalance(arr, size) <<endl;
 return 0;
}