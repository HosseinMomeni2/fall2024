#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cint(n) int n;cin>>n;

int f(int n)
{
    int x = 1;
    int res = 1;

    while(true)
    {
        if(x >= n)
            return res;

        res++;
        x = 2*x + 2;
    }
}

void solve()
{
    cint(n);
    cout << f(n) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--)
        solve();

//    cout << f(10);

    return 0;
}