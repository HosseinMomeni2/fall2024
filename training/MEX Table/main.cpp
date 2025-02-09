#include <iostream>
using namespace std;

void solve()
{
    int m, n; cin >> m >> n;
    cout << max(n, m) + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while(n--)
        solve();

    return 0;
}


