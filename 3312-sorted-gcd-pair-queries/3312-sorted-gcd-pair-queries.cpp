class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> answer;
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int>freq(maxVal+1,0);
        for (int x : nums) {
            freq[x]++;
        }
        vector<long long> divisible(maxVal + 1, 0);
        for (int g = 1; g <= maxVal; g++) {
            for (int multiple = g; multiple <= maxVal; multiple += g) {
                divisible[g] += freq[multiple];
            }
        }
        vector<long long> pairCount(maxVal + 1);
        for (int g = 1; g <= maxVal; g++) {
            long long k = divisible[g];
            pairCount[g] = k * (k - 1) / 2;
        }
        vector<long long> exact(maxVal + 1);
        for (int g = maxVal; g >= 1; g--) {
            exact[g] = pairCount[g];
            for (int multiple = 2 * g; multiple <= maxVal; multiple += g) {
                exact[g] -= exact[multiple];
            }
        }
        vector<long long> prefix(maxVal + 1);
        prefix[0] = 0;
        for (int g = 1; g <= maxVal; g++) {
            prefix[g] = prefix[g - 1] + exact[g];
        }
        for (long long q : queries) {
            int g = lower_bound(prefix.begin() + 1,
                                prefix.end(),
                                q + 1) - prefix.begin();
            answer.push_back(g);
        }
        return answer;
    }
};