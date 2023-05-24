//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int a[], int b[], int m, int n)
    {
        int s1=0,s2=0,i=0,j=0;
        while(i<m and j<n){
            if(a[i]<b[j]){
                s1+=a[i++];
                
            }
            else if(a[i]>b[j]){
                s2+=b[j++];
            }
            else{
                s1+=a[i++];
                s2+=b[j++];
                s1=max(s1,s2);
                s2=max(s1,s2);
            }
        }
        while(i<m){
            s1+=a[i++];
        }
        while(j<n){
         s2+=b[j++];   
        }
        return max(s1,s2);
        
    
        //Your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends