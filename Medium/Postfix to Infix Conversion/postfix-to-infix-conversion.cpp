//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isop(char c){
      if((c>='a' and c<='z')or (c>='A' and c<='Z')){
          return true;
      }
      return false;
  }
    string postToInfix(string exp) {
        stack<string>st;
        for(char c:exp){
         if(isop(c)){
             string nw(1,c);
             st.push(nw);
         }   
         else {
             string op1=st.top();
             st.pop();
             string op2=st.top();
             st.pop();
             st.push('('+op2+c+op1+')');
         }
        }
        return st.top();
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends