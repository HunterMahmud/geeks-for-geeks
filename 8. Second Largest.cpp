// url = https://practice.geeksforgeeks.org/problems/second-largest3735/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    /*
	    bool f = true;
	    int mx=0;
	    for(int i=1; i<n; i++){
	        if(arr[mx]<arr[i]){
	            mx = i;
	            
	        }
	        if(f && (arr[mx] < arr[i] || arr[i]-arr[mx])){
	            f = false;
	        }
	    }
	    if(f) return -1;
	    int rem = arr[mx];
	    for(int i=0; i<n; i++){
	        if(rem==arr[i]) arr[i]=0;
	    }
	    mx = 0;
	    for(int i=1; i<n; i++){
	        if(arr[mx]<arr[i]){
	            mx = i;
	        }
	    }
	    
	    return arr[mx];
	    */
	    // new code because first one not working for some case
	    sort(arr,arr+n,greater<int>());
	    int mx = arr[0];
	    for(int i=0; i<n; i++){
	        if(mx>arr[i]) return arr[i];
	    }
	    return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
