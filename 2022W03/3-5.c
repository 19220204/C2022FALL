#include<stdio.h>
int fac_bit_count(int n)
{
	long int a=1,i=1,x=0;
	
	while(i<=n)
	{
		a=a*i;
		i++;
		
	}
	while(a>0)
	{
		a=(a-a%10)/10;
		x++;
	}
	printf("%ld",x);
 } 
 int main()
 {
 	long int n;
 	scanf("%ld",&n);
 	fac_bit_count(n);
 	return 0;
 	
 }
