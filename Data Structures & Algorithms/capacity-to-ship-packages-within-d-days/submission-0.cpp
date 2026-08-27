class Solution {
public:
   
    int shipWithinDays(vector<int>& weights, int days) {
        // Calculate the initial boundaries for binary search
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        
        while (left < right) {
            // Use left + (right - left) / 2 to prevent potential integer overflow
            int mid = left + (right - left) / 2; 
            
            if (canShip(weights, days, mid)) {
                // If it's possible, try to find a smaller valid capacity
                right = mid;
            } else {
                // If it's not possible, we need a larger capacity
                left = mid + 1;
            }
        }
        
        return left;
    }

private:
    bool canShip(const vector<int>& weights, int days, int capacity) {
        int days_needed = 1;
        int current_weight = 0;
        
        for (int weight : weights) {
            if (current_weight + weight > capacity) {
                days_needed++;
                current_weight = weight;
            } else {
                current_weight += weight;
            }
        }
        
        return days_needed <= days;
    }
        
    };
    
