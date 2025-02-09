#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(int i=0; i<n; i++)
#define cint(n) int n; cin >> n;

void solve()
{
    cint(n);
    vector<int> a(n);
    loop(n) cin >> a[i];
    vector<bool> hash(n, false);
    vector<int> b(n, -1);

    loop(n)
    {
        if(!hash[a[i]-1])
        {
            hash[a[i] - 1] = true;
            b[i] = a[i];
        }
    }
//    for(auto x : b) cout << x << ' ';

    int j = 0;
    loop(n)
    {
        if(b[i] == -1)
        {
            for(;; j++)
            {
                if(!hash[j])
                {
                    b[i] = j+1;
                    hash[j] = true;
                    break;
                }
            }
        }
    }
    for(auto x : b) cout << x << ' '; cout << '\n';
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
