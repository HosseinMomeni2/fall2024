#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s, i, e; cin >> s >> i >> e;
    int sub = s-i;
    if(sub+e <= 0)
    {
        cout << "0\n";
        return;
    }
    if(e < sub)
    {
        cout << e + 1 << "\n";
        return;
    }


    sub += e;
//    cout << sub << endl;
    cout << ceil(sub/2.00) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout << setprecision(0);
    int n; cin >> n;
    for(int i=0; i<n; i++)
        solve();

    return 0;
}
