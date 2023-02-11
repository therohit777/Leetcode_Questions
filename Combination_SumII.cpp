class Solution {
public:
    void sub(vector<int>& candidates,int target,int sum, int i,vector<int> output,vector<vector<int>> &ans){
        if(sum==target){
            ans.push_back(output);
            return;
        }
        if(sum>target){
            return;
        }
        if(i==candidates.size()){
            return;
        }

        output.push_back(candidates[i]);
        sum+=candidates[i];
        sub(candidates,target,sum,i+1,output,ans);
        output.pop_back();
        sum-=candidates[i];

        while( i+1<candidates.size() && candidates[i]==candidates[i+1])i++;
        sub(candidates,target,sum,i+1,output,ans);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        int sum =0;
        sort(candidates.begin(),candidates.end());
        sub(candidates,target,sum,i,output,ans);
        return ans;
    }
};
