//Palindrome Integer

class Solution {
public:
    bool isPalindrome(int x) {
        bool isP = false;
        int r = 0;
        long long rev = 0;  //Long here because if we use int then it will show the run time error bcz it will overflow due to exceeding the maximum value
        int temp = x;
        while(x>0)
        {
            r = x%10;
            rev = (rev*10) + r;
            x /=10;
        }
        if(temp==rev)
        {
            return true;
        }
        else{
            return false;
        }
    }
};