#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	if(a%2==0)
	printf("%d��������",a);
	else
	{
	i=3;
	while(a%i!=0&&i<=sqrt(a))
	{
		i++;
	}
	if(i<=sqrt(a))
	printf("%d��������",a);
	else
	printf("%d������",a);  
	
	
	
	}
	return 0;
 } 
