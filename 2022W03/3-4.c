#include<stdio.h>
int is_pow2(int n)
{
	while(n%2==0)
	{
		n=n%2;
	}
	if(n=1)
	return 0;
	else return -1;
	
 } 
 int main()
 {
 	int n,i;
 	scanf("$d",&n);
 	i=is_pow2(n);
 	if(i==0)
 	printf("ÊÇ");
 	else printf("²»ÊÇ");
 	return 0;
 	
 } 
