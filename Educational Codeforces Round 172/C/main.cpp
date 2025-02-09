#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for(int i=0; i<n; i++)

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}

void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<pair<int, int>> v;
    int sum = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(sum > 0)
        {
            pair<int, int> p; p.first = i; p.second = sum;
            v.push_back(p);
        }

        if(s[i] == '1') sum++;
        else sum--;
    }
    sort(v.begin(), v.end(), comp);
//    cout << '\n'; for(auto x : v) cout << x.first << ' ' << x.second << '\n'; cout << endl; ///debug

    int m = 1;
    sum = 0;
    bool flag = true;
    for(int i=0; i<v.size(); i++)
    {
        if(sum >= k)
        {
            flag = false;
            break;
        }

        sum += v[i].second;
        m += 1;
    }
    if(sum >= k)
    {
        flag = false;
    }

    if(flag) cout << -1 << '\n';
    else cout << m << '\n';
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
