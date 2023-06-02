// url = https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        long long total;
        int p;
        if(n%2==0) {p = n / 2; total = p*(n+1);}
        else {p = (n+1)/2; total = p*n;}
        
        long long sum = 0;
        for(int i: array){
            sum+=i;
        }
        return total-sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
