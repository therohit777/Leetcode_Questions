class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]]=i+1;
        }
        vector<int> v;
        int i=0;
        int j=nums1.size();
        while(i<j){
            int goalindex = -1;
            if(m[nums1[i]]){
                for(int k=m[nums1[i]];k<nums2.size();k++){
                    cout<<k;
                    if(nums2[k]>nums1[i]){
                        goalindex=nums2[k];
                        break;
                    }
                }
            }
            v.push_back(goalindex);
            i++;
        }
        return v;
    }
};