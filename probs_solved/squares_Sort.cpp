class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int left =0,right=nums.size()-1;
        for(int i = nums.size()-1;i>=0;i--){
            if(abs(nums[left])>nums[right]){
                ans.push_back(nums[left]*nums[left]);
                left++;
            }
            else{
                ans.push_back(nums[right]*nums[right]);
                right--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
