//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans=-1;
    unordered_map<int,int>umap;
    
    int i=0,j=0;
    
    while(j<s.length()){
        umap[s[j]]++;
        
        int size=umap.size();
        
        if(size==k){
            int length=j-i+1;
            ans=max(length,ans);
            j++;
        }
        
        else if(size>k){
            while(size>k){
                umap[s[i]]--;
                
                if(umap[s[i]]==0){
                    umap.erase(s[i]);
                }
                
                size=umap.size();
                i++;
            }
            j++;
        }
        
       else j++;    
        
        
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends