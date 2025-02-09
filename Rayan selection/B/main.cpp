#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
//    s.push_back('1'); n++;
    int otp = 0;

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
           count = 0;
           continue;
        }
        else count ++;

//        cout << "count = " << count << "   i = " << i << endl;

        if(count == m)
        {
            otp ++;
            i = i+k-1;
            count = 0;
        }
    }

    cout << otp << '\n';
}

int main() {
    int n = 1;
    cin >> n;
    while(n--)
        solve();

    return 0;
}