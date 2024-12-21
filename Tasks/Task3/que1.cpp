#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int nums[], int size) {
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if(nums[i]==1){
            count++;
            if(count>maxCount){
                maxCount = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    int nums[] = {1, 1, 0, 1, 1, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "Maximum consecutive 1s: " << findMaxConsecutiveOnes(nums, size) << endl;
    return 0;
}
