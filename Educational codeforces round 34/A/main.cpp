#include <bits/stdc++.h>
using namespace std;


bool f(int n)
{
    if(n == 3 || n == 7 || n == 6)
        return true;
    else if(n<7)
        return false;

//    cout << "n-3 : " << f(n-3) << "\n";
//    cout << "n-7 : " << f(n-7) << "\n";
//    cout << "n-3 || n-7 : " << (f(n-3)||f(n-7)) << "\n";
    return (f(n-3) || f(n-7));

}

void solve()
{
    int n; cin >> n;
    if(n >= 12) cout << "YES\n";
    else
    {
        if(f(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for(int i=0; i<t; i++)
        solve();

//    for(int i=0; i<100; i++)
//        cout << i << " : " << f(i) << "\n";

//    cout << f(6);

    return 0;
}
