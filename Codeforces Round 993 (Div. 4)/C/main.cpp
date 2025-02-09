#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(int i=0; i<n; i++)
#define cint(n) int n; cin >> n;

void solve()
{
    cint(m);cint(a);cint(b);cint(c);
    int x = min(m, a);
    int y = min(m, b);
    int z = min(2*m - x - y, c);
    ll otp = x + y + z;
    cout << otp << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=1;
    cin >> n;
    while(n--)
        solve();

    return 0;
}
