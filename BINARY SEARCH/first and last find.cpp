class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower=-1;
        int upper=-1;
        int start=0;
        int n=nums.size();
        int end=n-1;
        
       while(start<=end){
           int mid=start+(end-start)/2;
           if(nums[mid]==target){
               lower=mid;
               end=mid-1;
           }

           else if(nums[mid]>target)end=mid-1;
           else start=mid+1;
       }
      start=0;
      end=n-1;

      while(start<=end){
            int mid=start+(end-start)/2;
          if(nums[mid]==target){
               upper=mid;
               start=mid+1;
          }
          else if(nums[mid]>target)end=mid-1;
          else start=mid+1;
      }

      vector<int>ans;
      ans.push_back(lower);
      ans.push_back(upper);
      return ans; 
       
    }
};

