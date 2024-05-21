// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int max_nearest_sum(int arr1[],int arr2[],int size,int target){
    
    int i=0,j=0;
    int answer=INT_MIN;
    
    while(i<size and j>=0){
        if(arr1[i]+arr2[j]>target)j--;
        else if(arr1[i]+arr2[j]<=target){
            int sum=arr1[i]+arr2[j];
            if(sum>answer)answer=sum;
            
            i++;
        }
    }
    
    return answer;
}


int main() {
    
   int size=5;
   int arr1[size]={2,5, 8,10,15};
   int arr2[size]={3,5,8,8,10};
   int target=11;
   cout<<max_nearest_sum(arr1,arr2,size,target);
   
    
    
    
    
    return 0;
}