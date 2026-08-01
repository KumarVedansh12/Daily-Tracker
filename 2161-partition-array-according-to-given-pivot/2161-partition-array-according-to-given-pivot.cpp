class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>gre;
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
        while(e--){
            less.push_back(pivot);
        }
        for(int i=0;i<gre.size();i++){
            less.push_back(gre[i]);
        }
        return less;
    }
};