class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string cleaned="";
        for (char c :s){
            if(isalnum(c)){
                cleaned=cleaned+(char)tolower(c);
            }
        }


        n = cleaned.size();

        int i=0;
        while( i<n/2){
            if(cleaned[i]!=cleaned[n-i-1]){
                return false;
            }
            i++;
        }
        return true;  
    }
};
