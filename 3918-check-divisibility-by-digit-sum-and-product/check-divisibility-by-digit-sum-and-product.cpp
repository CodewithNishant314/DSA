class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long prd = 1;
        long long SUM = 0;
        int original=n;

        while(n>0){
            int rem=n%10;
            sum+=rem;
            prd*=rem;
            n=n/10;
        }
        SUM=(prd+sum);
        if(original%SUM==0){
            return true;
        }else{
            return false;
        }


        
    }
};