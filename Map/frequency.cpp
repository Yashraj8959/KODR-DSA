#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> frequencyMap; 
    int arr[] = {1, 2, 3, 4, 3, 2, 3, 6, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        frequencyMap[arr[i]]++; 
    }

    // Print the frequencies
    for (const auto& pair : frequencyMap) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}