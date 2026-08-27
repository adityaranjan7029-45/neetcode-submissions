class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        
        vector<int> result;
        int n=nums.size();
        for (int i=0;i<n;i++){
            counts[nums[i]]++;
            if((counts[nums[i]])==n/3+1){
                result.push_back(nums[i]);
            }
        }
        return result;
        
    }
};