#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int m, n; cin >> n >> m;
    vector<vector<int>> v(n+2 , vector<int>(m+2, 0));
    for(int i=0; i<m+2; i++)
        v[0][i] = v[n+1][i] = 1;
    for(int i=0; i<n+2; i++)
        v[i][0] = v[i][m+1] = 1;
//    for(auto x : v){for(auto y : x) cout << y; cout << endl;}cout << endl; ///debug


    for(int i=0; i<n; i++)
    {
        string s; cin >> s;
        for(int i=0; i<m; i++)
        {
            if
        }
    }
}

int main() {
    int n=1;
    cin >> n;
    while(n--)
        solve();

    return 0;
}
