#include<stdio.h>
 void triangle_judge(int a,int b,int c)
{
	if(a+b<=c||a+c<=b||b+c<=a)
	printf("���ܹ���������");
	else  
	{
	
	if(a==b&&b==c)
	printf("�ȱ�������");
	else if(a!=b&&a!=c&&b!=c)
	printf("��ͨ������");
	else printf("����������"); 
	}
	
 } 
 int main()
 {
 	int a,b,c;
 	scanf("%d %d %d",&a,&b,&c);
 	triangle_judge(a,b,c);
 	return 0;
 	
 	
 	
  } 