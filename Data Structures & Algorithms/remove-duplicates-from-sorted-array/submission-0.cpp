class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Edge case: empty array
        if (nums.empty()) {
            return 0;
        }
        
        // The first element is always unique, so we start inserting at index 1
        int insertIndex = 1; 
        
        // Scan the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            
            // If the current element is different from the previous one, it's a new unique number!
            if (nums[i] != nums[i - 1]) {
                
                // Write it to the insert position
                nums[insertIndex] = nums[i]; 
                
                // Move the insert position forward
                insertIndex++; 
            }
        }
        
        // insertIndex naturally represents the total count of unique elements
        return insertIndex; 
    }
};