#include<stdio.h>
void move(char S,char T)
{
	printf("%c->%c\n",S,T);
}
void hanoi(int n,char S,char H,char T)
{

	if(n==1)
	move(S,T);
	else
	{
		while(n>1)
		{
		
		hanoi(n-1,S,T,H);
		move(S,T);
		hanoi(n-1,H,S,T);
		n--;
		}
	}
	

}
int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
