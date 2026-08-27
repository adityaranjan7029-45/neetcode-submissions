class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        int product=1;
        int zerocount=0;
        int i=0;
        
        while(i<n){
            if(nums[i]!=0){
            product=product*nums[i];
            }
            else{
                zerocount++;
            }
            i++;

        }
        for(int i=0;i<n;i++){
            if(zerocount>1){
                result.push_back(0);
                
            }
           else if(zerocount==1){
                 if (nums[i]==0){
                    result.push_back(product);
                 }
                 else{
                    result.push_back(0);
                 }
            }
            else {
                result.push_back(product/nums[i]);
            }
        
            
        }
        return result;
    }
};
