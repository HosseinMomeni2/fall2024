#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(int i=0; i<n; i++)
#define cint(n) int n; cin >> n;

void solve()
{
    string s; cin >> s;
    string otp;
    for(int i = s.size()-1; i>=0; i--)
    {
        if(s[i] == 'p')
            otp.push_back('q');
        else if(s[i] == 'q')
            otp.push_back('p');
        else
            otp.push_back(s[i]);
    }

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
