class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;
        int low =0;
        int high = total-1;
        int mid = low+(high-low)/2;
        int element=0;
        while(low<=high){
               element = matrix[mid/col][mid%col];
            if(element==target){
                return true;
            }
            if(element>target){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
            mid = low+(high-low)/2;
        }
        return false;
    }
};