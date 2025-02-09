#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for(int i=0; i<n; i++)

void solve()
{
    int n; cin >> n;
    vector<int> v(n, 0);
    loop(i, n)
    {
        int c; cin >> c;
        v[c-1] ++;
    }
//    for(auto x : v) cout << x << ' '; cout << "\n\n" << endl;

    int ones = 0;
    int otp = 0;
    for(auto x : v)
    {
        if(x == 1)
        {
//            cout << "i" << endl;
            ones ++;
        }

        else if(x > 1)
        {
            otp ++;
        }
    }

//    cout << ones << endl; ///debug
    ones++; ones = ones >> 1; ones *= 2;
//    cout << ones << ' ' << otp << endl; ///debug
    otp += ones;

    cout << otp << '\n';
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
