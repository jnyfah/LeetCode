class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
         int n=code.size();
        vector<int>ans(n);
        for(int i=0;i<code.size();i++)
        {
            int s=abs(k);
            int sum=0;
            if(k>0)
            {
                int j=(i+1)%n;
                while(s!=0)
                {
                    sum+=code[j];
                    j=(j+1)%n;
                    s--;
                }
                ans[i]=sum;
                
            }
            else if(k<0)
            {
                int j=0;
                if(i==0)
                {
                    j=n-1;
                }
                else
                {
                    j=(i-1)%n;
                }
                while(s!=0)
                {
                    sum+=code[j];
                    if(j==0)
                    {
                        j=n-1;
                    }
                    else
                    {
                        j=(j-1)%n;
                    }
                    s--;
                }
                ans[i]=sum;
            }
            else if(k==0)
            {
                ans[i]=0;
            }
        }
        return ans;
        
    }
};
