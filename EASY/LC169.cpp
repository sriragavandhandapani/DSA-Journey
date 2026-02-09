class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a = 0;
        int count = 0;
        for(int num:nums)
        {
            if(count==0)
            {
                a=num;
            }
            if(num==a)
            {
                count++;
            }
            else{
                count--;
            }
        }
        return a;
        
        //sorting
        // int s = nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[s/2];
    }
};