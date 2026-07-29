class Solution {
public:
    bool possible(vector<int>& bloom ,int days,int m,int k){
        int n=bloom.size();
        int c=0,no_of_b=0;
        for(int i=0;i<n;i++){
            if(bloom[i]<=days){
                c++;
            }
            else{
                no_of_b+=(c/k);
                c=0;
            }
            
        }
        no_of_b+=(c/k);
        if(no_of_b>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=bloomDay.size();
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
       long long total_flower=(long long)m*k;
       long long ans=maxi;
       if(total_flower>n) return -1;
       int l=mini,r=maxi;
       while(l<=r){
        long long mid=l+(r-l)/2;
        if(possible(bloomDay,mid,m,k)==true){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
       }
       return ans;
    }
};
