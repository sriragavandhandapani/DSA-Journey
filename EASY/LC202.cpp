class Solution {
public:
    bool isHappy(int n) {
            while(n>9)
            {
                n=square(n);
            }
            
        if(n==1 || n==7)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

    int square(int n)
    {
        int sum=0;
        long long digits=0;
        while(n!=0)
        {
            digits = n%10;
            sum = sum+(digits*digits);
            n= n/10;
        }
        return sum;
    }
};