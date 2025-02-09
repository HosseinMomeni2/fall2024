#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(int i=0; i<(n); i++)
#define cint(n) int (n); cin >> (n);

void qq(const vector<int>& a, const vector<int>& b, ll sum_a, ll sum_b, ll x)
{
    for(auto ita : a)
    {
        if(sum_a-ita == 0) continue;
//        if(sum_a - ita  > abs(x)) break;
        if(x % (sum_a-ita)  ==  0)
        {
            for(auto itb : b)
            {
                if((sum_a - ita)*(sum_b - itb)  ==  x)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
}

void solve()
{
    int n, m, q; cin >> n >> m >> q;
    vector<int> a(n), b(m);
    ll sum_a=0, sum_b=0;
    loop(n)
    {
        cin >> a[i];
        sum_a += a[i];
    }
    loop(m)
    {
        cin >> b[i];
        sum_b += b[i];
    }

    sort(a.rbegin(), a.rend());
    for(auto x : a) cout << x << " "; cout << endl;

    for(int c=0; c<q; c++)
    {
        ll x; cin >> x;
        qq(a, b, sum_a, sum_b, x);
    }
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
