//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int nums[], int n, int target) {
	    // code here
	     vector<int>v(2,-1);
        int i=0, j=n-1;
        while(i<=j){
            int m=(i+j)>>1;
            if(nums[m]==target and (m==0 or nums[m-1]!=target)){
                v[0]=m;
                break;
            }
            else if(nums[m]>=target){
                j=m-1;
            }
            else{
                i=m+1;
            }
        }
        i=0,j=n-1;
         while(i<=j){
            int m=(i+j)>>1;
            if(nums[m]==target and (m==n-1 or nums[m+1]!=target)){
                v[1]=m;
                break;
            }
            else if(nums[m]>target){
                j=m-1;
            }
            else{
                i=m+1;
            }
        }
        if(v[0]==-1)return 0;
        return v[1]-v[0]+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends