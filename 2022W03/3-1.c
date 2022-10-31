#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	if(a%2==0)
	printf("%d不是素数",a);
	else
	{
	i=3;
	while(a%i!=0&&i<=sqrt(a))
	{
		i++;
	}
	if(i<=sqrt(a))
	printf("%d不是素数",a);
	else
	printf("%d是素数",a);  
	
	
	
	}
	return 0;
 } 
