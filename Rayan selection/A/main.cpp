#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    cout << lcm(m , n) << "\n";
}

int main() {
    int n = 1;
    cin >> n;
    while(n--)
        solve();

    return 0;
}
