class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int last = nums.size()-1;
        int mid = start + (last-start)/2;
        int indx=-1;
        while(start<=last){
            if(nums[mid]==target){
                indx=mid;
                break;
            }
            else if(nums[mid]>target){
                last--;
            }
            else{
                start++;
            }
            mid=start+(last-start)/2;
        }
        if(indx==-1){
            return {-1,-1};
        }

        int indx1=indx;
        int indx2=indx;
        while(indx1<nums.size() && nums[indx1]==target ){
            indx1++;
        }
        while(indx2>=0 && nums[indx2]==target){
            indx2--;
        }
        return {indx2+1,indx1-1};

    }
};