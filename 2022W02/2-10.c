//https://www.acwing.com/problem/content/submission/code_detail/18357849/


#include <stdio.h>
int main()
{
   int a,b,c,m,n;
   scanf("%d,%d,%d",&a,&b,&c);
   if(a>=b)
   m=a;
   else
   m=b;
   if(m>=c)
   n=m;
   else
   n=c;
   printf("%d eh o maior\n",n);
   return 0; 
}

