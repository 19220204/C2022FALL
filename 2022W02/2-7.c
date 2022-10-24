#include <stdio.h>
int main()
{
    long int a,b,c,d,i,x;
    scanf("%ld %ld %ld",&a,&b,&c);
    i=1;
    x=a;
    while(i<b)
    {
    a=a*x;
    i++;
    }
    d=a%c;
    printf("%ld",d);
   return 0; 
}
