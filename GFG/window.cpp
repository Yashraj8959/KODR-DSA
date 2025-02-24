// Count Distinct Elements In Every Window of Size K

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// Function to count distinct elements in every window of size K
vector<int> countDistinct(int arr[], int n, int k){
    vector<int> res;
    for(int i = 0; i<= n -k; i++){

        unordered_set<int> st;
        for(int j = i; j< k+i; j++){
            st.insert(arr[j]);
        }
        res.push_back(st.size());
    }
    return res;

}
int main()
{
    int arr[] = {1,2,1,3,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    vector<int> ans = countDistinct(arr, n, k);
    for(auto ele : ans){
        cout<<ele<<" ";
    }


 return 0;
}



// class Solution {
//     public:
//       vector<int> countDistinct(vector<int> &arr, int k) {
//           // code here.
//           int n = arr.size();
//           unordered_map<int,int> map;
//           vector<int> res;
//           for (int i = 0; i<k; i++){
//               map[arr[i]]++;
              
//           }
//               res.push_back(map.size());
          
//           for(int i = k; i<n; i++){
//               map[arr[i]]++;
//               map[arr[i-k]]--;
              
//               if(arr[i-k]==0){
//                   map.erase(arr[i-k]);
//               }
//               res.push_back(map.size());
//           }
          
//           return res;
//       }
//   };