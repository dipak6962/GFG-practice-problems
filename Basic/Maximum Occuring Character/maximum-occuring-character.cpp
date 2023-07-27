//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int>mp(26,0);
        for(auto i:str){
            mp[i-'a']++;
        }
        int maxi=0;
        char ans;
        for(int i=0;i<26;i++){
            if(maxi<mp[i]){
                maxi=mp[i];
                ans='a'+i;
                }
        }
        return ans;
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends