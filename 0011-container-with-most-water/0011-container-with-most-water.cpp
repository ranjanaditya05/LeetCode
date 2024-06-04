class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        int i=0, j=n-1, result=0, area=0;
        while(i<j){
            result= (j-i)*min(height[i], height[j]);
            area= max(result, area);

            if(height[j]>height[i]){
                i++;
            } else{
                j--;
            }
        }
        return area;
    }
};