class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_Area=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            if(height[i]<=height[j]){
                max_Area=max(max_Area,(j-i)*height[i]);
                i++;
            }
            else{
                max_Area = max(max_Area,(j-i)*height[j]);
                j--;
            }
        }
        return max_Area;
    }
};
