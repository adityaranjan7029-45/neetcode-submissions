class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        
        vector<int> result;
        int n=nums.size();
        for (int i=0;i<n;i++){
            counts[nums[i]]++;
            
            }

        for (auto pair:counts){
            if(pair.second>n/3){
                result.push_back(pair.first);
            }
        }
        
        return result;
        
    }
};