class Solution {
public:
    bool check(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0;
    
        //Checks for ascending-order
        for(int i = 1; i < len; i++){
            if(nums[i-1] > nums[i]){
                cnt++;
            }
        }

        //Checks if last elem is greater than first elem
        if (nums[len - 1] > nums[0]){
            cnt++;
        }

        
        return cnt <=1;


    }
};
