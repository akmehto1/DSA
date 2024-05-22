class Solution {

    bool check(int mid,vector<int>piles,long long int h){
        long long int value=0;
        for(int i=0;i<piles.size();i++){
             if(piles[i]%mid==0){
                value+=piles[i]/mid;
             }
             else{
                value+=(piles[i]/mid)+1;
             }
        }


        return value<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_value=*max_element(piles.begin(),piles.end());
       
        int start=1;
        int end=max_value;
        int answer=INT_MAX;


        while(start<=end){
            long long int mid=start+(end-start)/2;
            cout<<mid<<endl;

            if(check(mid,piles,h)){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }


        return answer;
    }
};