class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty()) return false;

        int rows=matrix.size();
        int cols=matrix[0].size();

        

        int left = 0;
        int right = (rows * cols) -1;

        while(left <= right){
            int mid = left + (right-left)/2;

            int mid_val=matrix[mid/cols][mid%cols];
            if(target == mid_val){
                return true;
            }
            if(target>mid_val){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
        
    }
};
