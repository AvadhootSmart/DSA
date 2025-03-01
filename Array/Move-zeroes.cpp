class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while (j < nums.size()-1)
        {
        // For element j being non zero
            if (nums[j] != 0)
            {
                i++;
                j++;
            }
        // Fixing i on element 0
            else
            {
                j++;
            }
            if (nums[j] != 0 && nums[i] == 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};
