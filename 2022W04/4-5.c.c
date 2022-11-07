//https://www.acwing.com/problem/content/submission/code_detail/18851293/


#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef unsigned long long ULL;
const int N = 25;
ULL f[N];

void setf(){
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= N; i ++ )
        f[i] = f[i - 3] + f[i - 2] + f[i - 1];
}

int main()
{
    int n;
    setf();
    while (cin >> n && n)
        cout << f[n];
}
