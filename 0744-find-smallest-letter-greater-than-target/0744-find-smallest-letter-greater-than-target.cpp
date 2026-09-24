class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n, m = target;
        for(int i = 0; i < letters.size();i++){
            n = letters[i];
            if(n > m){
                return letters[i];
            }
        }
        return letters[0];
    }
};