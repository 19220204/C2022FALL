//https://www.acwing.com/problem/content/submission/code_detail/18358596/

#include <stdio.h>
#include<math.h>

int main()
{
   float a,b,c,x,y;
   scanf("%f %f %f",&a,&b,&c);
   if(b*b<4*a*c||a==0)
    printf("Impossivel calcular\n");
    else
    printf("R1 = %.5f\nR2 = %.5f\n", (-b+sqrt(b*b-4*a*c))/(a+a), (-b-sqrt(b*b-4*a*c))/(a+a));
   
   return 0; 
}

