#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> dp;
void pow()
{
    ll t = 1;
    for(int i=0; i<1e5+1; i++)
    {
        dp.push_back(t);
        t *= 2;
        t %= int(1e9 + 7);
    }
}

void solve()
{
    int n; cin >> n;
    int x;
    for(int i=0; i<n; i++)
        cin >> x;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        cout << dp[x] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pow();
    solve();



    return 0;
}


///https://codeforces.com/contest/2025/problem/B
