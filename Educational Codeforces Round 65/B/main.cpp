#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(4);
    vector<int> ans(6, 0);
    cout << "? 1 2\n" << flush;
    cin >> v[0];
    cout << "? 2 3\n" << flush;
    cin >> v[1];
    cout << "? 3 4\n" << flush;
    cin >> v[2];
    cout << "? 4 5\n" << flush;
    cin >> v[3];

    bool flag42=false, flag15=false, flag23=false;
    for(int i=0; i<3; i++)
    {
        if(v[i]%23 == 0 && v[i+1]%23 == 0)
        {
            ans[i+1] = 23;
            flag23 = true;
        }
        if(v[i]%7 == 0 && v[i+1]%7 == 0)
        {
            ans[i+1] = 42;
            flag42 = true;
        }
        if(v[i]%5 == 0 && v[i+1]%5 == 0)
        {
            ans[i+1] = 15;
            flag15 = true;
        }
    }
    if(!flag15)
    {
        if(v[0] % 5 == 0)
            ans[0] = 15;
        else if(v[3] % 5 == 0)
            ans[4] = 15;
    }
    if(!flag23)
    {
        if(v[0] % 23 == 0)
            ans[0] = 23;
        else if(v[3] % 23 == 0)
            ans[4] = 23;
    }
    if(!flag42)
    {
        if(v[0] % 7 == 0)
            ans[0] = 42;
        else if(v[3] % 7 == 0)
            ans[4] = 42;
    }


    for(int i=0; i<4; i++)
    {
        if(ans[i]==0 && ans[i+1]==0)
            continue;

        if(ans[i] == 0)
        {
            ans[i] = v[i]/ans[i+1];
        }
        if(ans[i+1] == 0)
        {
            ans[i+1] = v[i]/ans[i];
        }
    }
    for(int i=0; i<4; i++)
    {
        if(ans[i]==0 && ans[i+1]==0)
            continue;

        if(ans[i] == 0)
        {
            ans[i] = v[i]/ans[i+1];
        }
        if(ans[i+1] == 0)
        {
            ans[i+1] = v[i]/ans[i];
        }
    }
    for(int i=0; i<4; i++)
    {
        if(ans[i]==0 && ans[i+1]==0)
            continue;

        if(ans[i] == 0)
        {
            ans[i] = v[i]/ans[i+1];
        }
        if(ans[i+1] == 0)
        {
            ans[i+1] = v[i]/ans[i];
        }
    }

    vector<int> all = {4, 8, 16, 15, 23, 42};
    for(auto x : all)
    {
        bool flag = false;
        for(auto y : ans)
        {
            if(x == y)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            ans[5] = x;
            break;
        }
    }


    cout << "! ";
    for(auto x : ans) cout << x << " "; cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
