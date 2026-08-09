class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size(),col=matrix[0].size();
        int top=0;
        int bottom=row-1;
        int right=col-1;
        int left=0;
        while(top<=bottom && left<=right){

            //print top

            for(int j=left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++;

            //print right


            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            //print bottom


        
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            //print left


            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    ans.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return ans;

        
    }
};