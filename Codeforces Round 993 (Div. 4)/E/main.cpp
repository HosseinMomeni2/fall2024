#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(int i=0; i<n; i++)
#define cint(n) int n; cin >> n;

ll f(ll k, ll l, ll r, ll n)
{
    ll pow = 1;
    ll otp = 0;
    while(true)
    {
        ll line = min(n/pow, r);
//        cout << line << endl;

        if(line < l) break;
        otp += (line - l + 1);
//        cout << otp << endl;

        pow *= k;
    }

    return otp;
}

void solve()
{
    ll k, l1, r1, l2, r2; cin >> k >> l1 >> r1 >> l2 >> r2;
    ll res = f(k, l1, r1, r2) - f(k, l1, r1, l2-1);
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=1;
    cin >> n;
    while(n--)
        solve();

//    cout << f(3, 5, 7, 63);

    return 0;
}
