//https://www.acwing.com/problem/content/submission/code_detail/18851603/

#include <stdio.h>
#include <string.h>
long long n,mod=1e9+7;
void Matrix1(long long a[2],long long b[2][2])
{
    long long c[2]={0};
    for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                c[j]=(c[j]+a[k]*b[k][j]%mod)%mod;
            }
        }
        memcpy(a,c,sizeof(c));
}
void Matrix2(long long b[2][2])
{
    long long c[2][2]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                c[i][j]=(c[i][j]+b[i][k]*b[k][j]%mod)%mod;
            }
         } 
    }
    memcpy(b,c,sizeof(c));
}
int main()
{
    while(~scanf("%lld",&n))
    {   n++;
        if(n==-1) break;
        else
        {  
            long long a[2]={0,1};
            long long b[2][2]={0,1,1,1};
            while(n)
            {
            if(n&1) Matrix1(a,b);
            Matrix2(b);
            n>>=1;
            }
        printf("%lld\n",a[0]);
        }
    }
    return 0;
}

