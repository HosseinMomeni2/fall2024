#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<bool>> v(n, vector<bool>(n, false));
    for(int i=0; i<n; i++) v[i][i] = true;


    for(int count=0; count<m; count++)
    {
//        cout << "group number " << count << endl;
        vector<int> group;
        int k; cin >> k;
        for(int c=0; c<k; c++)
        {
            int a; cin >> a;
            if(!group.size())
            {
                group.push_back(a);
                continue;
            }
//            cout <<" c = " << c << endl;
            for(auto x : group)
            {
                for(int i=0; i<n; i++)
                {
                    if(v[i][x-1])
                    {
                        v[i][a-1] = v[a-1][i] = true;
                    }
                }
            }
            group.push_back(a);
        }
        for(auto x : v)
        {
            for(auto y : x)
                cout << y << " ";
            cout << endl;
        }
        cout << "\n\n" << endl;
    }


    cout << "happy" << endl;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
            if(v[i][j]) sum++;
        cout << sum << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
