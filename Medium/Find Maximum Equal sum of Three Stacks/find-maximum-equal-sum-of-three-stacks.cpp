//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int n,int m,int l,vector<int> &sa,vector<int> &ss,vector<int> &sd){
        int sum1=0,sum2=0,sum3=0;
        
        for(int i=0;i<n;i++)
        sum1+=sa[i];
        
        for(int i=0;i<m;i++)
        sum2+=ss[i];
        
        for(int i=0;i<l;i++)
        sum3+=sd[i];
        
        int sum=min(sum1,sum2);
        sum= min(sum,sum3);
        int i=0,j=0,k=0;
        while(sum1!=0 and sum2!=0 and sum3!=0){
            if(sum1>sum)sum1-=sa[i++];
            if(sum2>sum)sum2-=ss[j++];
            if(sum3>sum)sum3-=sd[k++];
            if(sum1==sum2 and sum2==sum3) return sum1;
        sum=min(sum1,sum2);
        sum= min(sum,sum3);
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends