class Solution {
public:
    // Helper function to check if a strict substring is a palindrome
    bool isStrictPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;

        while (l < r) {
            if (s[l] == s[r]) {
                // Characters match, move inward normally
                l++;
                r--;
            } else {
                // Mismatch found! We have ONE chance to delete a character.
                // We check both possibilities: deleting l OR deleting r.
                return isStrictPalindrome(s, l + 1, r) || isStrictPalindrome(s, l, r - 1);
            }
        }
        
        return true;
    }
};