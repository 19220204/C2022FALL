#include<stdio.h>
int GCD_iterative(int m,int n)
{
	int a,b,c;
	if(m>n)
	a=m,b=n;
	else
	a=n,b=m;
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	return b;
}
int main()
{
	int m,n,i;
	scanf("%d %d",&m,&n);
	i=GCD_iterative(m,n);
	printf("最大公约数为%d",i);
	return 0;
	
}

