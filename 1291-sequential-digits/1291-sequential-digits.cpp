class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++){
            int nums=0;
            for(int j=i;j<=9;j++){
                nums=nums*10+j;

                if(nums>=low && nums<=high)
                ans.push_back(nums);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};