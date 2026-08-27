class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int n=numbers.size();
        int l=0;
        int r=n-1;
       

        while(l<r){
            if(numbers[l]+numbers[r]==target){
                result.push_back(l+1);
                result.push_back(r+1);
                l++;
                r--;
                
            }
            else if(numbers[l]+numbers[r]>target){
                r--;
            }
            else if(numbers[l]+numbers[r]<target){
                l++;
            }
        }
        return result;

        
    }
};
