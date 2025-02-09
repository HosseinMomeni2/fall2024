#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int otp1=101, otp2=101;

    for(int i=0; i<n; i++)
    {
        if(s[i] == '>')
        {
            otp1 = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(s[i] == '<')
        {
            otp2 = n-i-1;
            break;
        }
    }

    cout << min(otp1, otp2) << '\n';
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
