class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        double maxi = 0;
        int ans = 0;
        for(int i = 0; i < dimensions.length; i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            double diagonal = Math.sqrt(length * length + width * width);
            int area = length * width;
            if(diagonal > maxi || diagonal == maxi && (area > ans)){
                maxi = diagonal;
                ans = area;
            }

        }
           return ans;
    }
};
     