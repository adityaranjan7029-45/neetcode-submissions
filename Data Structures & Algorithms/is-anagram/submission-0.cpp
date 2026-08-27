class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size()!=t.size()){
            return false;
        }
        unordered_map <char,int> CountS;
        unordered_map <char,int> CountT;

        for(int i=0;i<s.size();i++){
            CountS[s[i]]++;
            CountT[t[i]]++;

        }

        return CountS==CountT;


        
        
    }
};