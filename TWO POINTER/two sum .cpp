class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            int curr=target-nums[i];
            if(umap.find(curr)==umap.end()){
                umap.insert({nums[i],i});
            }
            else {
                result.push_back(umap[curr]);
                result.push_back(i);
                break;
            }

            
        }


        return result;
    }
};
