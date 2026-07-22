class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid =l+(r-l)/2;
            if(nums[mid]==target) return mid;
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<nums[mid])
                r=mid-1;
                else l=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[r])
                l=mid+1;
                else r=mid-1;
            }
        }
        return -1;
    }
};


// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low=0,high=n-1;
//         while(low<=high){
//             int mid =low+(high-low)/2;
//             if(nums[mid]==target) return mid;

//             if (nums[low]<=nums[mid]){
//                 if(nums[low]<=target && target<nums[mid])
//                 high=mid-1;
//                 else low =mid+1;
//             }
//             else {
//                 if(nums[mid]<=target && target<=nums[high])
//                 low=mid+1;
//                 else high=mid-1;
//             }
//         }
//         return -1;
//     }
// };