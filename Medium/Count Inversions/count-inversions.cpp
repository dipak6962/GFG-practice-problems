//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    // int count=0;
long long int merg(long long arr[],long long s,long long e){
   
long long int mid=s+(e-s)/2,count=0;
long long int len1=mid-s+1;
long long int len2=e-mid;
long long int *first=new long long[len1];
long long int *second=new long long [len2];
long long int k=s;
for(long long int i=0;i<len1;i++){
 first[i]=arr[k++];
}
k=mid+1;
for(long long int i=0;i<len2;i++){
 second[i]=arr[k++];
}
long long int i=0,j=0;
k=s;
while(i<len1 and j<len2){
    if(first[i]<=second[j]){
        arr[k++]=first[i++];
    }
    else{
        arr[k++]=second[j++];
        count=count+(len1-i);
    }
}
while(i<len1){
     arr[k++]=first[i++];
}
while(j<len2){
    arr[k++]=second[j++];
}
 return count;
}

long long int mergsort(long long arr[],long long s,long long e){
 if(s>=e)return 0;
 long long int count=0;
 long long mid=s+(e-s)/2;
count+= mergsort(arr,s,mid);
 count+=mergsort(arr,mid+1,e);
 count+=merg(arr,s,e);
 return count;
}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergsort(arr,0,N-1);
        // count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends