class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
       int n=people.size();
       int min_boat=0;
       int l=0;
       int r=n-1;

       while(l<=r){
        if(people[l]+people[r]<=limit){
            l++;
            
        }
            r--;

        min_boat++;

       }
       return min_boat;

        }
       
       
    };
    
    
