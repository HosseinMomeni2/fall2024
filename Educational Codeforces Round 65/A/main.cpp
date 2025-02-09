#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int size; cin >> size;
    string s; cin >> s;
    for(int i=0; i<size; i++)
    {
        if(s[i] == '8')
        {
//            cout << "i : " << i << endl;
            if(size - i >= 11)
            {
                cout << "YES\n";
                return;
            }
            else
            {
                cout << "NO\n";
//                cout << "size - i : " << size - i << endl;
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for(int i=0; i<n; i++)
        solve();

    return 0;
}
