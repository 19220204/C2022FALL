//https://www.acwing.com/problem/content/submission/code_detail/18359391/

#include <stdio.h>
int main()
{
  int a,i=1;
  scanf("%d",&a);
  while(i<=a)
  {
      if(a%i==0)
      printf("%d\n",i);
      i++;
  
  
  }
  
   return 0; 
}

