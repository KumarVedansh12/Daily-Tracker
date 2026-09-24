class Solution {
public:
    int search(vector<int>& v, int t) {
        long long s = 0, e = v.size() - 1;
        while (s <= e) {
            long long mid = s + (e - s) / 2;
            if (v[mid] == t) return mid;
            else if (v[mid] > t) e = mid - 1;
            else s = mid + 1;
        }
        return -1;
    }
};