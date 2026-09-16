class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        
        sort(s1.begin(),s1.end());
        int left=0;
        int right=s1.size()-1;

        while(right<s2.size()){
            string s3="";
            for(int i=0;i<s1.size();i++){
                s3+=s2[i+left];
            }
            sort(s3.begin(),s3.end());

            if(s1==s3){
                return true;
                break;
            }
            left ++;
            right++;
           
        }
        return false;
    }
};
