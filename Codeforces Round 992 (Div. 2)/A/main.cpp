#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cint(n) int n;cin>>n;

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n), v1(n);
    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
        v[i] = v1[i]%k;
    }
    std::sort(v.begin(), v.end());

    if(v[0] != v[1])
    {
        cout << "YES\n";
        for(int i=0; i<n; i++)
            if(v1[i]%k == v[0])
            {
                cout << i+1 << '\n';
                return;
            }
    }

    if(v[n-1] != v[n-2])
    {
        cout << "YES\n";
        for(int i=0; i<n; i++)
            if(v1[i]%k == v[n-1])
            {
                cout << i+1 << '\n';
                return;
            }
    }

    for(int i=1; i<n-1; i++)
    {
        if(v[i] != v[i-1]  &&  v[i] != v[i+1])
        {
            cout << "YES\n";
            for(int j=0; j<n; j++)
                if(v1[j]%k == v[i])
                {
                    cout << j+1 << '\n';
                    return;
                }
        }
    }


    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
