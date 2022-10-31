//https://www.acwing.com/problem/content/submission/code_detail/18358725/

#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a>b)
    i=a%b;
    else i=b%a;
    if(i==0)
    printf("Sao Multiplos");
    else 
    printf("Nao sao Multiplos");
   return 0;
}

