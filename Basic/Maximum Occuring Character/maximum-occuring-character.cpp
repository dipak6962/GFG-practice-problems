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
        map<char,int>mp;
        for(auto i:str){
            mp[i]++;
        }
        int maxi=0;
        char ans;
        for(auto i:mp){
            if(maxi<i.second){
                ans=i.first;
                maxi=i.second;
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