// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
   
   int arr[]={0,0,8,8,8,0,0,5};
   
   unordered_map<int,int>umap;
   int k=1;
   umap[0]=1;
   int ans=0;
   int count=0;
   
   
  
   for(int i=0;i<8;i++){
       
       if(arr[i]==5)count++;
       
       
       int find=count-k;
       
       ans+=umap[find];
       
       umap[count]++;
       
       
   }
   
   cout<<ans;
   
    return 0;
}