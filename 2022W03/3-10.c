//https://www.acwing.com/problem/content/submission/code_detail/18384615/

#include<stdio.h>
int main()
{
        double a,m;
        scanf("%lf",&a);
        if(a<=2000)
        m=0;
        else if(2000<a&&a<=3000)
        m=(a-2000)*0.08;
        else if(3000<a&&a<=4500)
        m=(a-3000)*0.18+80;
        else
        m=(a-4500)*0.28+80+270;
        if(m==0)
        printf("Isento");
        else
        printf("R$ %.2lf",m);
        return 0;
    }
        
