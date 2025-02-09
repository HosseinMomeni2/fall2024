#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool comp_b(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second > p2.second;
}

bool comp_t(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first > p2.first;
}

void solve()
{
    int n, k; cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), comp_b);
//    for(auto x : v) cout << x.first << " " << x.second << endl; ///debug

    for(int i=0; i<n-1; i++)
    {
        if(v[i].second == v[i+1].second)
        {
            ll common_sec = v[i].second;
            vector<pair<ll, ll>> temp;
            int count = 0;
            for(int j=i; v[j].second == common_sec; j++)
            {
                temp.push_back(v[j]);
                count ++;
            }
            sort(temp.begin(), temp.end(), comp_t);

            for(int j=0; j<count; j++)
            {
                v[i+j] = temp[j];
            }
            i += count-1;
        }
    }
//    for(auto x : v) cout << x.first << " " << x.second << endl; ///debug

    ll sum=0;
    ll mx = -1;
    for(int i=0; i<k; i++)
    {
        sum += v[i].first;
        mx = max(mx, sum*v[i].second);
    }
    cout << mx;
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
