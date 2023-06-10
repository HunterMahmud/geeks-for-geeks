// url = https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int i,j;
        long long sum = 0;
        
        // if i-j ==0 both i++ and j--
        // if i-j >0 then j--
        // if i-j <0 then i++
        // after loop if sum =0 then there is a equilibrium point.
        
        /*
        
        if(n==1) return 1;
        //sum = a[0] - a[n-1];
        for(i=0,j=n-1; i!=j && i<n && j!=0 && j!=i; ){
            
            if(sum == 0) {sum = sum + a[i] - a[j];j--;i++;}
            else if(sum > 0) {sum = sum - a[j];j--;}
            else if(sum < 0) {sum = sum + a[i];i++;}
            
        }
        if(sum==0) return i+1;
        return -1;
        */
        if(n==1) return 1;
        // calculating the prefix sum
        for(int i=1;i<n;i++){
            a[i] += a[i-1];
        }
        for(int i=0; i<n-1; i++){
            if(a[i]==a[n-1]-a[i+1]) return i+2;
        }
        return -1;
        
    
        // Your code here
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
