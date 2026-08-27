class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
       int n=people.size();
       int min_boat=0;
       int l=0;
       int r=n-1;

       while(l<=r){

         if(l==r){
            min_boat++;
            break;
        }
       

        else if(people[l]+people[r]<=limit){
            min_boat++;
            l++;
            r--;

        }
        else if(people[l]+people[r]>limit){
            if(people[r]<=limit){
            min_boat++;
            r--;
        }


       }
       
       
    }
    return min_boat;
        
    }
};