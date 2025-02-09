#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for(int i=0; i<n; i++)
#define cint(n) int n;cin>>n;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
}

void solve()
{
    int n; cin >> n;
    int k; cin >> k;
    vector<pair<int, int>> v;
    loop(i, k)
    {
        cint(ind);
        cint(cost);
        v.push_back({ind, cost});
    }
    sort(v.begin(), v.end(), comp);
//    loop(i, v.size()) cout << v[i].first << ' ' << v[i].second << '\n'; cout << endl; ///debug

    vector<int> all_sum;
    int sum = v[0].second;
    for(int i=1; i<v.size(); i++)
    {
        if(v[i].first != v[i-1].first)
        {
            all_sum.push_back(sum);
            sum = 0;
        }

        sum += v[i].second;
    }
    all_sum.push_back(sum); sum = 0;
//    if(v[k-1].first == v[k-2].first) all_sum.push_back(sum + v[k-1].second);
//    else{all_sum.push_back(sum); all_sum.push_back(v[k-1].second);}
    sort(all_sum.rbegin(), all_sum.rend());
//    for(auto x : all_sum) cout << x << ' '; cout << endl; ///debug

    int otp = 0;
    if(n>all_sum.size()) n = all_sum.size();
//    cout << "n = " << n << endl; ///debug
    for(int i=0; i<n; i++)
        otp += all_sum[i];

    cout << otp << '\n';

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


///https://codeforces.com/problemset/problem/2036/B