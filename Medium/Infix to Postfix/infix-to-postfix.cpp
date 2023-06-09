//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        // Your code here
        int n=s.length();
        unordered_map<char ,int>mp;
        mp['+']=1;
        mp['-']=1;
        mp['*']=2;
        mp['/']=2;
        mp['^']=3;
        stack<char>st;
        string p="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                p+=s[i];
            }
            else if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(st.top()!='('){
                    p+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() and mp[s[i]]<=mp[st.top()]){
                    p+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            p+=st.top();
            st.pop();
        }
        return p;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends