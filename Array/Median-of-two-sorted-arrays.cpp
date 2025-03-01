class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        };

        sort(nums1.begin(), nums1.end());

        int s = 0;
        int e = nums1.size() - 1;
        int mid = s + (e - s) / 2;

        if (nums1.size() % 2 == 0) {
            return (nums1[mid] + nums1[mid + 1]) / 2.0;
        } else {
            return nums1[mid];
        }
    }
};
