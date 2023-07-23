//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int pivot(int arr[],int i,int j){
        while(i<j){
            int m=(i+j)>>1;
            if(arr[m]>=arr[0]){
                i=m+1;
            }
            else{
                j=m;
            }
           
        }
         return i;
    }
    int bsearch(int arr[],int i,int j,int k){
        while(i<=j){
            int m=(i+j)>>1;
            if(arr[m]==k)return m;
            if(arr[m]>k){
                j=m-1;
            }
            else if(arr[m]<k){
                i=m+1;
            }
            
        }
        return -1;
    }
    int search(int arr[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int p=pivot(arr,l,h);
        // cout<<p;
        if(arr[p]<=key and arr[h]>=key){
           return bsearch(arr,p,h,key); 
        }
        else{
            return bsearch(arr,l,p-1,key);
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends