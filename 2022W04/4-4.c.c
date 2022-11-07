//https://www.acwing.com/problem/content/submission/code_detail/18821578/

#include<stdio.h>

int hanoi(int n,int x)
{


		while(n>1)
		{
		x=hanoi(n-1,x);
		n--;
		}

	x=x+1;
	return x;	

}
int main()
{
	int n=1,x=0,i;
	while(n<=12)
	{
	i=hanoi(n,x);
	printf("%d\n",i);
	n++;
	}
	return 0;
}
