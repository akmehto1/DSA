// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
  int arr[10]={3,2,4,5,2,6,7,8,9,10};
  
 
int i=0;
int j=0;
unordered_map<int,int>umap;
int maxLength=0;

while(j<10){
    if(umap.find(arr[j])!=umap.end()){
        int id=umap[arr[j]];
        while(i<=umap[arr[j]]){
            umap.erase(arr[i]);
            i++;
        }
        umap[arr[j]]=j;
        j++;
    
    }
    else {
        umap[arr[j]]=j;
         maxLength=max(j-i+1,maxLength);
        j++;
       
    }
}


cout<<maxLength;
  

    return 0;
}