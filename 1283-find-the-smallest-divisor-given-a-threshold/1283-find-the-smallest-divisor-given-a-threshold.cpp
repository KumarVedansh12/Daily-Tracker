class Solution {
public:
    bool check(int mid,vector<int>& nums,int t){
        int sum=0;
        for(auto ele:nums){
            if(ele%mid==0) sum+=ele/mid;
            else sum+=1+ele/mid;
            if(sum>t) return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int t) {

        int n=nums.size();

        int lo=1;
        int hi=1e9;

        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,nums,t)) hi=mid-1;
            else lo=mid+1;
        }

        return lo;
    }
};