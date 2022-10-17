
class Solution
{
    public:
    //Function to find the nth catalan number.
    
    cpp_int findCatalan(int n) 
    {
      vector<cpp_int>dp(n+1);
      dp[0]=1;
      dp[1]=1;
      
       for(int i=2;i<=n;i++)
       {
           dp[i]=0;
           for(int j=0;j<i;j++)
           {
               dp[i]+=dp[j]*dp[i-j-1];
           }
       }
            
      return dp[n];
        
      
    }
    
};