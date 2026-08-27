class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counts;
        vector<int> result;
        
        for(int num:nums){
            counts[num]++;
            
        }
        for(int i=0;i<k;i++){
            int maxkey=-1;
            int maxvalue=-1;
           
            for (auto pair:counts){
                if(pair.second>maxvalue){
                maxvalue=pair.second;
                maxkey=pair.first;
                }

            }

            result.push_back(maxkey);
            counts.erase(maxkey);
        }
        return result;
    }
};
