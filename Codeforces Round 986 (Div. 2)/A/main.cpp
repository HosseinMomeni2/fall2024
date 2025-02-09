#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n, a, b; cin >> n >> a >> b;
    int x=0, y=0;
    string s;cin >> s;

    for(auto it : s)
    {
        if(it == 'N') y++;
        else if(it == 'S') y--;
        else if(it == 'E') x++;
        else if(it == 'W') x--;
    }
    if(x==0 && y==0)
    {
        if (a == b && b == 0)
            cout << "YES\n";
        else cout << "NO\n";


        return;
    }



    x = y = 0;
    for(int i=0; ; i++, i %= n)
    {
        char it = s[i];
        if(it == 'N') y++;
        else if(it == 'S') y--;
        else if(it == 'E') x++;
        else if(it == 'W') x--;


//        cout << x << " " << y << "\n";
        if(x==a && y==b)
        {
            cout << "YES\n";
            return;
        }

        if(x-n-1 > a  ||  y-n-1 > b)
            break;
    }

    cout << "NO\n";


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        solve();
    }

//    solve();

    return 0;
}
