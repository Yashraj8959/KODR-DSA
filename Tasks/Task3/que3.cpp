#include <iostream>
#include <climits>
using namespace std;

int thirdMax(int nums[], int size) {
    long max = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;

    for (int i = 0; i < size; i++) {
        if (nums[i] == max || nums[i] == secondMax || nums[i] == thirdMax) {
            continue; 
        }

        if (nums[i] > max) {
            thirdMax = secondMax;
            secondMax = max;
            max = nums[i];
        } else if (nums[i] > secondMax) {
            thirdMax = secondMax;
            secondMax = nums[i];
        } else if (nums[i] > thirdMax) {
            thirdMax = nums[i];
        }
    }

    return (thirdMax == LONG_MIN) ? max : thirdMax;
}

int main() {
    int nums[] = {3, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "Third distinct maximum number: " << thirdMax(nums, size) << endl;
    return 0;
}
