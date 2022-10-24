#include <stdio.h>
//https://www.acwing.com/problem/content/submission/code_detail/18358963/

int main()
{
    int N,a,b,c,i;
    scanf("%d",&N);
    if(N<2)
    printf("0");
    else 
    printf("0 1");
    i=2;
    a=0;
    b=1;
    while(i<N)
    {
      c=a+b;  
      a=b;
      b=c;
      
    printf(" %d",c);
    i++;
    }
    
 
   return 0; 
}

