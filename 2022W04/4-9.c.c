//https://www.acwing.com/problem/content/submission/818/
#include<iostream>
using namespace std;
int a[1000];
void reverse(int a[], int size)
{
    for(int i=size-1,j=0;i>=j;i--,j++)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main()
{
    int n,size;
    cin>>n>>size;
    for(int i=0;i<n;i++) cin>>a[i];
    reverse(a,size);
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}
