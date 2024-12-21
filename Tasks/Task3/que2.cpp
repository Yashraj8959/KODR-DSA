#include <iostream>
using namespace std;

void findFrequency(int nums[], int size) {
    for(int i=0;i<size; i++){
        int count = 1;
        if(nums[i] != -1){
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j]){
                    count++;
                    nums[j]= -1; 
                }
            }
        cout<<nums[i]<<" : "<<count<<endl;
        }
    }
   
}

int main() {
    int nums[] = {1, 5, 3, 1, 3, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    findFrequency(nums, size);
    return 0;
}
