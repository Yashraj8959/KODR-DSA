#include<bits/stdc++.h>
using namespace std;

// Function to merge two halves of the array
void mergeArrays(vector<int>& arr, int first, int mid, int last);

// Function to perform merge sort on the array
void mergeSort(vector<int>& arr, int first, int last) {
    if (first < last) {
        // Find the middle point
        int mid = first + (last - first) / 2;
        
        // Recursively sort the first and second halves
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        
        // Merge the sorted halves
        mergeArrays(arr, first, mid, last);
    }
}

// Function to merge two halves of the array
void mergeArrays(vector<int>& arr, int first, int mid, int last) {
    vector<int> temp; // Temporary vector to store merged elements
    int i = first;    // Starting index for the left subarray
    int j = mid + 1;  // Starting index for the right subarray
    
    // Merge the two halves into temp
    while (i <= mid && j <= last) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy the remaining elements of the left subarray, if any
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    
    // Copy the remaining elements of the right subarray, if any
    while (j <= last) {
        temp.push_back(arr[j]);
        j++;
    }
    
    // Copy the merged elements back into the original array
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[idx + first] = temp[idx];
    }
}

int main() {
    vector<int> arr = {2, 3, 4, 1, 8, 6, 9, 33}; // Initial array
    cout << "Original array:" << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Perform merge sort on the array
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    cout << "Sorted array:" << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}