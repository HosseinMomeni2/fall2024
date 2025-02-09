#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for(int i=0; i<n; i++)

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n);
    loop(i, n)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
//    for(auto x : v) cout << x << " "; cout << endl; ///debug

    int sum = 0;
    int ind = n-1;
    bool flag = false;
    loop(i, n)
    {
        sum += v[i];
        if(sum > k)
        {
            ind = i;
            flag = true;
            break;
        }
    }
    if(flag) cout << k - (sum - v[ind]) << '\n';
    else cout << k - sum << '\n';
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
