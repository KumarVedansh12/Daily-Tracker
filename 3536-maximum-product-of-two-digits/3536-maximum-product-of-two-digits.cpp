class Solution {
public:
    int maxProduct(int n) {
        int rem=1;
        while(n>0){
            int x=n%10;
            rem*=x;
            n/=10;
        }
        return rem;
    }
};