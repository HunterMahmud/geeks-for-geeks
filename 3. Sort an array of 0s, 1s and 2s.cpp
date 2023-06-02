// url = https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        int res[3]={0};
        for(int i=0;i<n;i++){
            res[a[i]]++;
        }
        int index = 0;
        for(int i = 0; i<res[0];i++){
            a[index++]=0;
        }
        for(int i = 0; i<res[1];i++){
            a[index++]=1;
        }
        for(int i = 0; i<res[2];i++){
            a[index++]=2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
