//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &m)
    {
        unordered_set<int>s,st;
        int n=m.size(),k=m[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++){
                if(m[i][j]==1){
                    s.insert(i);
                    st.insert(j);
                }
            }
            
        }
        
        for(auto i = s.begin(); i != s.end(); ++i)
        {
           
            
            for(int j=0;j<k;j++){
                m[*i][j]=1;
                  
                //  cout<<m[*i][j]<<"   ";
                }
            
            // cout<<endl;
        }
        
         for(auto it:st)
        {
             
            
            for(int j=0;j<n;j++){
                m[j][it]=1;
                    // s.erase(it);
                  
                }
            
            
        }
        
        
        //  for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<k;j++){
        //      cout<<m[i][j]<<" ";
        //     }
            
        //     cout<<endl;
        // }
        // code here 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends