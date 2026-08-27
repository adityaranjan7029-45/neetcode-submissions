class Solution {
public:
    int characterReplacement(string s, int k) {
        // Use an array instead of a map for faster lookups (only 26 uppercase letters)
        vector<int> counts(26, 0); 
        
        int left = 0;
        int max_count = 0;
        int max_length = 0;

        // The 'right' pointer expands our window one character at a time
        for (int right = 0; right < s.length(); right++) {
            
            // 1. Add the new character to our current window's count
            counts[s[right] - 'A']++;
            
            // 2. Keep track of the highest frequency of a single character in our window
            max_count = max(max_count, counts[s[right] - 'A']);

            // 3. Check if the window is valid
            // (Total chars in window) - (Most frequent char) = Chars we need to replace
            if ((right - left + 1) - max_count > k) {
                // The window is invalid. We must shrink it from the left.
                counts[s[left] - 'A']--;
                left++;
            }

            // 4. Update the maximum length we've successfully seen so far
            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};