#include <stdio.h>
#include<time.h>
int main()
{
	clock_t start_clock, end_clock;
	double elapsed_time;
	int i;
	 int a,b,c,d,n,x;
	 scanf("%d %d %d",&a,&b,&c);
	start_clock=clock();
	for(i=1;i<=1000000000;++i)
   
    
    n=1;
    x=a;
    while(n<b)
    {
    a=a*x;
    n++;
    }
    d=a%c;
    printf("%ld",d);
    end_clock=clock();
    elapsed_time=(double)(end_clock-start_clock)/CLOCKS_PER_SEC;
    printf("%.6lf",elapsed_time);
   return 0; 
}
