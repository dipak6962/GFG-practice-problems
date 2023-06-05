//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            int n=s.length();
            string str="";
            //code here.
            stack<char>st;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
                    while(!st.empty()){
                        str+=st.top();
                        st.pop();
                    }
                    str+=s[i];
                }
                else{
                    st.push(s[i]);
                }
            }
             while(!st.empty()){
                        str+=st.top();
                        st.pop();
                    }
            return str;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends