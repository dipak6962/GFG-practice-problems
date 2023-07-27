//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string>v;
        string ans="",curr="";
        int i=0,n=s.length();
        for(;i<n;i++){
            if(s[i]=='.'){
                v.push_back(curr);
                curr="";
            }
            else{
                curr+=s[i];
            }
        }
        if(curr!="")v.push_back(curr);
        n=v.size()-1;
        for(;n>=0;n--){
            ans+=v[n];
            if(n!=0){
                ans+='.';
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends