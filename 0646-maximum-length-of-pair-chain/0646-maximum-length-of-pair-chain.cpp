class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        if (n == 0) return 0;
        int ans=1;
        sort(pairs.begin(),pairs.end(),[](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });
        int last=pairs[0][1];
        for(int i=1;i<n;i++){
            if(last<pairs[i][0]){
                ans++;
                last=pairs[i][1];
            }
        }
        return ans;
    }
};