// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr, arr + n); // sort the array to get the
                            // corner cases ans.
        int minEle,
            maxEle; // these 2 variables will hold the
                    // between elements max and min value
        int result = arr[n - 1]
                     - arr[0]; // current result when arr[0]
                               // iss min and arr[n-1] is max

        for (int i = 1; i <n; i++) {
            if (arr[i] >= k && arr[n - 1] >= k) {
                maxEle = max(arr[i - 1] + k,
                             arr[n - 1] - k); //
              
                minEle = min(arr[0] + k, arr[i] - k);

                result = min(result, maxEle - minEle);
                // if the middle elements max and min
            }
        }
        return result; 
               
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends