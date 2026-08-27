class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> lastseen (128,-1);
        int max_length=0;
        int l=0;

        for(int r=0;r<s.size();r++){
            char currentchar=s[r];

            if(lastseen[currentchar]>=l){
                l=lastseen[currentchar]+1;
            }
            lastseen[currentchar]=r;
            max_length=max(max_length,r-l+1);
        }
        return (max_length);


    }
};
