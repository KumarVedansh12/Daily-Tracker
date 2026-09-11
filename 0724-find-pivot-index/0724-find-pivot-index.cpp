class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int lsum=0;
            for(int j=0;j<i;j++){
                lsum+=nums[j];
            }
            int rsum=0;
            for(int k=n-1;k>i;k--){
                rsum+=nums[k];
            }
            if(lsum==rsum){
                return i;
            }
        }
        return -1;
    }
};