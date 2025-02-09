#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
void solve()
{
    ld n , b , c; cin >> n >> b >> c;
    if(b == 0)
    {
        if(c==0)
            cout << -1 << "\n";
        else cout << n-1 << "\n";

        return;
    }
    if(c >= n) {cout << n << "\n"; return;}

    long double tmp = (n-c) / b;
//    cout << tmp << endl;

    ll i=-1;
    i = ceil(tmp);
//    cout << ceil(tmp) << "  " << i << "\n";

//    cout << i;


//    cout << "here\n";
    int k = n-i;
    cout << k << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
cout << fixed << setprecision(0);

    int n; cin >> n;
    while(n--)
    {
        solve();
    }

//    solve();

    return 0;
}
