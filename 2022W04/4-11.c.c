//https://www.acwing.com/problem/content/submission/code_detail/18852165/

#include<iostream>
using namespace std;
int main()
{
    double x[100]={0};
    for(int i=0;i<100;i++) 
    {
        cin>>x[i];
        if(x[i]<=10) printf("A[%d] = %.1f\n",i,x[i]);
    }
    return 0;
}
