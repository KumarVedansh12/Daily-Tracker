class Solution {
public:
int possible(vector<int> &weights,int cap){
    int n=weights.size();
    int load=0,day=1;
    for(int i=0;i<n;i++){
        if(load+weights[i]>cap){
            day =day+1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int maxi=*max_element(weights.begin(),weights.end());
        for(int nums:weights){
            sum+=nums;
        }
        int l=maxi,r=sum;
        int ans=sum;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(weights,mid)<=days){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        // for(int i=maxi;i<=sum;i++){
        //     int dayReq=possible(weights,i);
        //     if(dayReq<=days) return i;
        // }
        return ans;
    }
};