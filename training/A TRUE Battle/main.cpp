#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int len; cin >> len;
    string inp; cin >> inp;

    bool flag = false;
    string s;
    for(int i=0; i<len; i++)
    {
        if(!flag)
            s.push_back(inp[i]);

        if(inp[i] == 0)
            flag = true;
        else if(flag)
            flag = false;
    }
//    cout << "s : " << s << endl;

    len = s.size();
    string s2;
    s2.push_back(s[0]);
    for(int i=1; i<len-1; i++)
    {
        if(s[i]=='1' && s[i-1]=='0' && s[i+1]=='0')
            s2.push_back('0');
        else
            s2.push_back(s[i]);
    }
    s2.push_back(s[len-1]);


    for(auto x : s2)
    {
        if(x == '1')
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++)
        solve();

    return 0;
}






///https://codeforces.com/problemset/problem/2030/C
///solved!

///note : find(11) was the easiest answer