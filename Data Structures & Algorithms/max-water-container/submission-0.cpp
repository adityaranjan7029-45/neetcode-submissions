class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n=heights.size();
        int l=0;
        int r=n-1;
        int max_area=0;

        while(l<r){
            int max_height=min(heights[l],heights[r]);
            int max_width=r-l;

            int area=max_height*max_width;

            if(area>max_area){
                max_area=max(area,max_area);

            }

            if(heights[l]<heights[r]){
                l++;
            }

            else {
                r--;
            }
            
        }
        return max_area;
    }
};
