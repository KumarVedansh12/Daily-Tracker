class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int l=1,r=x;
        int ans=-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid <x){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};