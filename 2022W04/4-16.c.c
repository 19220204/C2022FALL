//https://www.acwing.com/problem/content/submission/code_detail/18852410/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.size()-1;i++)cout<<char(a[i]+a[i+1]);
    cout<<char (a[0]+a[a.size()-1]);
}
