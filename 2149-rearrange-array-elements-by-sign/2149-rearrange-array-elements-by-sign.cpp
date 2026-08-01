class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int N=nums.size();
        vector<int> p,n,ans;
        for(int i=0;i<N;i++){
            if(nums[i]>=0) p.push_back(nums[i]);
            else if(nums[i]<0) n.push_back(nums[i]);
        }
        for(int i=0;i<p.size();i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};