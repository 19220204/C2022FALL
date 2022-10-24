//https://www.acwing.com/problem/content/submission/code_detail/18357987/


#include <stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d",&i);
    a=i%60;
    if(i>=60)
    b=((i-a)/60)%60;
    else b=0;
    if(i>=3600)
    c=(((i-a)/60)-b)/60;
    else c=0;

    printf("%d:%d:%d",c,b,a);
 
   return 0; 
}

