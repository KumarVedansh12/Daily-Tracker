class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int>s(n),l(n);
        for(int i=0;i<n;i++){
            s[i]=intervals[i][0];
            l[i]=intervals[i][1];
        }
        sort(s.begin(),s.end());
        sort(l.begin(),l.end());

        int j=0;
        long ans=0;
        for(int i=0;i<n;i++){
            while(j<n && l[j]<s[i]){
                j++;
            }
            ans+=i-j;
        }
        return ans;
    }
};