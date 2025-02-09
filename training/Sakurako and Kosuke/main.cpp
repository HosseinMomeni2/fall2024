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
    if(n&1)
    {
        cout << "Kosuke\n";
        return;
    }
    cout << "Sakurako\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }



    return 0;
}


///https://codeforces.com/problemset/problem/2033/A