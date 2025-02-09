#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        v[i] --;
    }

    int m = -1, count = 0;
    for(int i=0; i<n; i++)
    {
        m = max(m, v[i]);

        if(m == i)
        {
            count ++;
            m = -1;
        }
    }

    cout << count;
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
