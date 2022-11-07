//https://www.acwing.com/problem/content/submission/code_detail/18852317/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    int n=0;
    while(cin>>a[++n]);
    sort(a,a+n);
    for(int i=1;i<n;i++)cout<<a[i];
}
