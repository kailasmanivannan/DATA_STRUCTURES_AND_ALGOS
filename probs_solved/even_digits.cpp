class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,temp=0;
        for(int i =0;i<nums.size();i++){
            temp=0;
            while(nums[i]!=0){
                nums[i]/=10;
                temp++;
            }
            if(!(temp&1))
                count++;
        }
        return count;
    }
};
