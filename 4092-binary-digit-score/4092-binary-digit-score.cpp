class Solution {
public:
    int count(int n){
        int cun=0;
        while(n>0){
            n=n&(n-1);
            cun++;
        }
        return cun;
    }
    int calculateScore(int a, int b) {
        int s1=count(a);
        int s2=count(b);
        if(s1>=s2){
            return s1*s2;
        }
        else{
            return s2/s1;
        }
    }
};