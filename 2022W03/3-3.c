#include<stdio.h>
void printf_hex(int a)
{
	int y[10000],x;
	x=0;
	while(a>0)
	{
		y[x]=a%16;
		a=(a-a%16)/16;
		x++;
	}
	int z=x-1;
	while(z>=0)
	{
		if(y[z]<10)
			printf("%d",y[z]);
		if(y[z]==11)
		printf("B");
		if(y[z]==12)
		printf("C");
		if(y[z]==13)
		printf("D");
		if(y[z]==14)
		printf("E");
		if(y[z]==15)
		printf("F");
		if(y[z]==10)
		printf("A");
		z--;
	}
	
 } 
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	printf_hex(a);
 }
