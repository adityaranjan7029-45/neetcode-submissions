class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        if(n<3){
            return result;

        }

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
        int l=i+1;
        int r=n-1;

        while(l<r){
            int current_sum=nums[i]+nums[l]+nums[r];
            if(current_sum==0){
                result.push_back({nums[i],nums[l],nums[r]});
            
            while(l<r && nums[l]==nums[l+1]){
                l++;
            }

            while(l<r && nums[r]==nums[r-1]){
                r--;
            }
            l++;
            r--;

            
        }
        else if(current_sum<0){
            l++;
        }

        else{
            r--;
        }

      }
    }
    return result;

}
};
