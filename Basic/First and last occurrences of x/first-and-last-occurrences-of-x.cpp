//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int fbinary(int arr[],int n,int x){
    int i=0,j=n-1;
    while(i<=j){
        int m=(i+j)>>1;
        if(arr[m]==x and (arr[m-1]<x or m-1<0))return m;
        else if(arr[m]>=x)j=m-1;
        else i=m+1;
    }
    return -1;
}
int lbinary(int arr[],int n,int x){
    int i=0,j=n-1;
    while(i<=j){
        int m=(i+j)>>1;
        if(arr[m]==x and (arr[m+1]>x or m+1==n))return m;
        else if(arr[m]>x)j=m-1;
        else i=m+1;
    }
    return -1;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    
    return {fbinary(arr,n,x),lbinary(arr,n,x)};
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends