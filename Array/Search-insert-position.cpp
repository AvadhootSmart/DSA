class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size(),index=size,left=0,right=size-1,mid;
        // int left = 0,right=size-1,mid;
        // int right = size - 1;

        while (left <= right) {
            mid = left + (right - left) / 2;

            if (target == nums[mid]) {
                index = mid;
                break;
            } else if (nums[mid] > target) {
                index = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return index;
    }
};
