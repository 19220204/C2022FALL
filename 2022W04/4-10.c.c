//https://www.acwing.com/problem/content/submission/code_detail/18852036/

#include <bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
  for(int i=0; i<20; i++)
  {
    cin>>a[i];
  }
  for(int i=19; i>=0; i--)
  {
    printf("N[%d] = %d\n",abs(i-19),a[i]);
  }
  return 0;
}
