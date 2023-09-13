//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        for(int i=0;i<n;i++){
            bool flag=true,f=false;
            int j=0;
            for( j=0;j<n;j++){
                if(i!=j and m[i][j]==1)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true ){
            for(int k=0; k<n;k++){
                if(i!=k and m[k][i]==0){
                    f=true;
                    break;
                }
            }
             if(f==false)return i;
            }
           
            
        }
        return -1;
        // code here 
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends