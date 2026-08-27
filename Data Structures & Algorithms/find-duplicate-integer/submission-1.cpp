class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> counts;
        int n=nums.size();
        int result=0;
        for(int i=0;i<n;i++){
           counts[nums[i]]++;
        }
        for(int i=0;i<n;i++){
           if(counts[nums[i]]>1){
            return nums[i];
        }
    }
}
};
