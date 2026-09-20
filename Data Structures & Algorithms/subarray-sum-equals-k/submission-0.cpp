class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int current_sum=0;
        unordered_map <int,int> prefix_counts;
        prefix_counts[0]=1;

        for(int num:nums){
            current_sum=current_sum+num;

            if(prefix_counts.count(current_sum-k)){
                count=count+prefix_counts[current_sum-k];
            }
            prefix_counts[current_sum]++;
        }
        

        return count;
    }
};