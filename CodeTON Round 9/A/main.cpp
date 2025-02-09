#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    for(int i=1; i<=n; i++)
        cout << 2*i -1 << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while(n--) solve();

    return 0;
}
