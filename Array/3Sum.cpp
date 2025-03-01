class Solution {
public:
vector<vector<int>> threeSum(std::vector<int>& nums) {
    vector<vector<int>> result;

    if (nums.size() < 3) {
        return result; // Cannot form triplets with less than three elements
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicates
        }

        int target = -nums[i];
        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }

                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

};
