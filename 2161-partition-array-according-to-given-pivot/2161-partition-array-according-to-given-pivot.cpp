class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>gre;
        vector<int> ans;
        int e=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                gre.push_back(nums[i]);
            }
            else{
                e++;
            }
        }
        for(int i=0;i<less.size();i++){
                ans.push_back(less[i]);
        }
        while(e--){
            ans.push_back(pivot);
        }
        for(int i=0;i<gre.size();i++){
            ans.push_back(gre[i]);
        }
        return ans;
    }
};