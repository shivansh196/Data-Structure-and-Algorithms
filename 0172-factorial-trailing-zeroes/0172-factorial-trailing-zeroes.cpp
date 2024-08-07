class Solution {
public:
    //  long long  fact(int n){
    //     if(n==0 || n==1){
    //        return 1;
    //     }
      
    //     return n*fact(n-1);
    //  }
    int trailingZeroes(int n) {
        // long long ans= fact(n);
        // int count=0;
        // while(ans!=0){
        //     if((ans%10)==0){
        //         count=count+1;
        //         ans = ans/10;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // return count;
        int count1=0;
        int count2=0;
        while(n>1){
            int temp = n;
            while(temp%2==0 || temp%5==0)
            {
                if(temp%2==0)
                {
                    count1++;
                    temp = temp/2;
                }
                if(temp%5==0)
                {
                    count2++;
                    temp = temp /5;
                }

            }
            n=n-1;

        }
        int ans = min(count1,count2);
        return ans;
    }
};