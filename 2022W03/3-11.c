//https://www.acwing.com/problem/content/submission/code_detail/18387146/

#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&a);
    i=1;
    while(i<=a)
    {
        scanf("%d",&b);
        int m=1;
        int n=0;
        
        while(m*m<b)
        {
           
            if(b%m==0)
            n=n+m+(b/m);
            m++;
            
            
        }
        if((n-b)==b)
        printf("%d is perfect\n",b);
        else
        printf("%d is not perfect\n",b);
        
        i++;
    }
    return 0;
    
    
    
    
    
}
