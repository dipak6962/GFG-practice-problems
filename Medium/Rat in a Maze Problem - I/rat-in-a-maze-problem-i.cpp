//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void paths(vector<string>&ans,string output , vector<vector<int>> v,vector<vector<int>> m,int i,int j,int n){
        if(i==n-1 and j==n-1){
            ans.push_back(output);
            return ;
        }
        v[i][j]=1;
        //down
        if(i!=n-1 and m[i+1][j]!=0 and v[i+1][j]!=1){
            output+='D';
            // v[i+1][j]=1;
            paths(ans,output,v,m,i+1,j,n);
            // v[i+1][j]=0;
            output.pop_back();
        }
        //left
        if(j!=0 and m[i][j-1]!=0 and v[i][j-1]!=1){
             output+='L';
            //  v[i][j-1]=1;
            paths(ans,output,v,m,i,j-1,n);
            // v[i][j-1]=0;
             output.pop_back();
        }
        //right
         if(j!=n-1 and m[i][j+1]!=0 and v[i][j+1]!=1){
             output+='R';
            //  v[i][j+1]=1;
            paths(ans,output,v,m,i,j+1,n);
            // v[i+1][j]=0;
             output.pop_back();
        }
        //up
         if(i!=0 and m[i-1][j]!=0 and v[i-1][j]!=1){
             output+='U';
            //  v[i-1][j]=1;
            paths(ans,output,v,m,i-1,j,n);
            // v[i-1][j]=0;
             output.pop_back();
        }
        v[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0)return ans;
        vector<vector<int>> v=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=0;
            }
        }
        string output="";
         paths(ans,output,v,m,0,0,n);
         sort(ans.begin(),ans.end());
         return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends