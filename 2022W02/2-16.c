
//https://www.acwing.com/problem/content/submission/code_detail/18359126/
#include <stdio.h>
int main()
{
    int a,b,n=-1,i;
    scanf("%d",&a);
    while(n<=0)
    {
        scanf("%d",&n);
    
    }
   i=1;
   b=0;
   while(i<=n)
   {
       b=b+a;
       a++;
       i++;
       
   
   }
   printf("%d",b);
   return 0; 
}

