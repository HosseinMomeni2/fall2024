#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());

    vector<int> m;
    int t = 0;
    int current = a[0];
    for(auto x : a)
    {
        if(x == current)
        {
            t++;
        }
        else
        {
            m.push_back(t);
            t = 1;
            current = x;
        }
    }
    m.push_back(t);
//    for(auto x : m) cout << x << " ";

    int otp = 0;
    for(int i=0; i<m.size(); i++)
    {
        if(m[i] <= 0) continue;

        otp += m[i];
        for(int j=i+1; j<m.size(); j++)
            m[j] -= m[i];
    }

    cout << otp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    int t; cin >> t;
//    for(int i=0; i<t; i++)
    solve();

//    vector<int> v = {2, 5, 7 ,8, 4, 3 ,1 ,4 ,5};
//    sort(v.rbegin(), v.rend());
//    for(auto x : v) cout <<x << " ";

    return 0;
}
