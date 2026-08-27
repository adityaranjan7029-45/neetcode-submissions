
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            // Find the middle index safely to prevent integer overflow
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Target found! Return its index.
            } 
            else if (nums[mid] < target) {
                // The target is larger, so ignore the left half
                left = mid + 1;
            } 
            else {
                // The target is smaller, so ignore the right half
                right = mid - 1;
            }
        }
        
        return -1; // Target is not in the array
    }
        }  ;  
 
    
