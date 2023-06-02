// url = https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> duplicate(1e5+1,0);
        vector<int> list;
        for(int i=0;i<n;i++){
            duplicate[arr[i]]++;
        }
        bool f = false;
        for(int i=0;i<n;i++){
            if(duplicate[i]>1) {list.push_back(i);f=true;}
        }
        if(!f){
            list.push_back(-1);
            return list;
        }
        return list;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
