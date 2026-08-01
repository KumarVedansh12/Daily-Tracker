class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                less.push_back(pivot);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                less.push_back(nums[i]);
            }
        }
        return less;
    }
};