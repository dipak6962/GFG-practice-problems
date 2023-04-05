//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int m=arr[n-1];
        int count=0;
        for(int i=0;i<n;i++){
               int p = i; 
            int cnt = 0; 
            while(p<n and arr[p]==arr[i]){
                p++; 
                cnt++;
            }
            
            if(cnt>1){
                count+= cnt; 
                i= p-1; 
            }
            else{
         for(int j=0;j<i;j++){
             if(arr[i]%arr[j]==0){
                 count++;
                 break;
             }
         }   
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends