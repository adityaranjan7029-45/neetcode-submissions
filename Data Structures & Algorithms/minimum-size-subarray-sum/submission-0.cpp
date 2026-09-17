class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> result;

        int n=nums.size();

        int k=0;
       
        while(k<n){
             int sum=0;
        for(int i=k;i<n;i++){
            sum=sum+nums[i];

            if(sum>=target){
                
                result.push_back(i-k+1);
                break;
                
            }
          }
          k++;
        }
        
        if(result.empty()){
            return 0;
        }


        return *min_element(result.begin(),result.end());

        
    }
};