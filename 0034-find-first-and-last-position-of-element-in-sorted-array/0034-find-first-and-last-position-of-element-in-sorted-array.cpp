class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int t=-1;
        int r=-1;
      for(int i=0;i<n;i++){
        if(nums[i]==target){
            t=i;
            break;
        }
      }
      for(int j=n-1;j>=0;j--){
        if(nums[j]==target){
            r=j;
            break;
        }
      }
      return {t,r};
    }
};
//     int findFirst(vector<int>& nums, int target) {
//         int left = 0, right = nums.size() - 1;
//         int ans = -1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;

//             if (nums[mid] == target) {
//                 ans = mid;
//                 right = mid - 1;
//             }
//             else if (nums[mid] < target) {
//                 left = mid + 1;
//             }
//             else {
//                 right = mid - 1;
//             }
//         }

//         return ans;
//     }

//     int findLast(vector<int>& nums, int target) {
//         int left = 0, right = nums.size() - 1;
//         int ans = -1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;

//             if (nums[mid] == target) {
//                 ans = mid;
//                 left = mid + 1; // keep searching right
//             }
//             else if (nums[mid] < target) {
//                 left = mid + 1;
//             }
//             else {
//                 right = mid - 1;
//             }
//         }

//         return ans;
//     }
// };


// core 
//   // int first = findFirst(nums, target);
//         // int last = findLast(nums, target);
        
//         // return {first, last};
//         int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
//         int ub=(upper_bound(nums.begin(),nums.end(),target)-nums.begin())-1;
//         if(lb==nums.size() || nums[lb]!=target)
//         return {-1,-1};

//         return {lb,ub};
