#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
void solve()
{
    ll n, x; cin >> n >> x;
    ll sub_max=-10000000001, d_max=-10000000001;
    for(int i=0; i<n; i++)
    {
        ll d, h; cin >> d >> h;
        if(d > d_max) d_max = d;
        if(d-h > sub_max) sub_max = d-h;
    }
//    cout << "dmax: " << d_max << "  submax: " << sub_max << endl; ///debug


    if(d_max >= x)
    {
        cout << 1 << "\n";
        return;
    }
    else if(sub_max <= 0)
    {
        cout << -1 << "\n";
        return;
    }


//    cout << "x - d_max = " << float(x-d_max) << endl; ///debug
    cout << ceil((ld)(x-d_max)/(ld)(sub_max)) + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout << setprecision(0);
    ll T=1;
    cin >> T;
    while(T--)
        solve();

    return 0;
}
