class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        int n3=min(n1,n2);
        string word3="";
        for(int i=0;i<n3;i++){
            word3=word3+word1[i]+word2[i];
        }

        if(n1>n2){
            for(int i=n2;i<n1;i++){
                 word3=word3+word1[i];
            }
        }
        if(n2>n1){
            for(int i=n1;i<n2;i++){
                 word3=word3+word2[i];
            }
        }
        return word3;

     }
    };
