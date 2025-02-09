#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll f(vector<int> v)
{
    ll otp = 0;
    int n = v.size();
    for(int i=0; i<n/2; i++)
    {
        int k = i;
        otp += v[k] * (-n + 1 + 2*k);
        k = n-1 - i;
        otp += v[k] * (-n + 1 + 2*k);
    }
    if(n%2)
    {
        int k = n/2;
        otp += v[k] * (-n + 1 + 2*k);
    }

    return otp;
}

void solve()
{
    int n; cin >> n;
    vector<int> v1(n), v2(n);
    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
        v2[i] = v1[i];
    }
    sort(v2.rbegin(), v2.rend());

    ll res = f(v1);

    int current = v2[0];
    for(int i=0; i<n; i++)
    {
        if(v2[i] != current)
        {
            if(current - v2[i] == 1)
            {
                vector<int> temp;
                for(int k=0; k<n; k++)
                    if(v1[k]==current || v1[k]==v2[i])
                        temp.push_back(v1[k]);
                res -= f(temp);
            }
            current = v2[i];
        }
    }

    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    int t; cin >> t;
//    for(int i=0; i<t; i++)
    solve();

//    vector<int> a;
//    for(int i=1000; i<200000; i++)
//        a.push_back(i);
//    cout << f(a);

    return 0;
}
