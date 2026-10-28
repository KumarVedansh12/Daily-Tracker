class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int freeday=0;
        int lastday=0;
        int n=meetings.size();
        if(n==0) return days;
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<n;i++){
            if(meetings[i][0]>lastday+1){
                freeday+=meetings[i][0]-lastday-1;
            }
            lastday=max(lastday,meetings[i][1]);
        }
        if(meetings[n-1][1]<days){
            freeday+=days-lastday;
        }
        return freeday;
    }
};