class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;   //Index is 1 because always the first number is unique
        int n=nums.size();
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=nums[i-1])  //j is coming in first(fast pointer) and i-1 is coming behind (i is slow pointer)
            {
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};