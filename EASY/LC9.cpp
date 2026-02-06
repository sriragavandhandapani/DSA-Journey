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
            r = x%10;  //ex: 121%10 =>1  --> x will become 12 so   12%10=> 2  --> x will be 1 so 1%10=> 1
            rev = (rev*10) + r; //0*10+0=>0  --> rev will become 1 so  1*10+0 =>10  --> rev will become 1*10+1=> <"101">
            x /=10;   //121/10 =>12  --> 12/10=> 1  --> 1/10 => 1  
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