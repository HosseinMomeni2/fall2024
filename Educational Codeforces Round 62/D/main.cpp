#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n; cin >> n;
    ll otp = 0;
    for(int i=n; i>2; i--)
        otp += i*(i-1);
    cout << otp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=1;
//    cin >> n;
    while(n--)
        solve();

    return 0;
}
