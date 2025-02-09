#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    string s1, s2; cin >> s1 >> s2;
    vector<int> v(n+1, 0);
    for(int i=0; i<n; i++)
    {
        if(s1[i] == '1'  &&  s2[i] == '1')
            v[i+1] = 2;
        else if(s1[i] == '?'  &&  s2[i] == '?')
            v[i+1] = -1;
        else if(s1[i] == '0'  &&  s2[i] == '0')
            v[i+1] = 0;
        else if(s1[i] == '1'  &&  s2[i] == '0')
            v[i+1] = 1;
        else if(s1[i] == '0'  &&  s2[i] == '1')
            v[i+1] = 1;
        else if(s1[i] == '1'  &&  s2[i] == '?')
            v[i+1] = 11;
        else if(s1[i] == '?'  &&  s2[i] == '1')
            v[i+1] = 11;
        else if(s1[i] == '0'  &&  s2[i] == '?')
            v[i+1] = 10;
        else if(s1[i] == '?'  &&  s2[i] == '0')
            v[i+1] = 10;
    }
//    for(auto x : v) cout << x << " "; cout << endl; ///debug


    bool flag = false;
    bool noise_flag = true;
    int tmp = 0;
    int max = 0;
    int counter = 0;
    for(int i=n, j=n; i>=0, j>=0; i--, j--)
    {
//        cout << i << endl; ///debug

        if(v[i]==0)
        {
            if(counter > max)
                max = counter;
            counter = 0;
            if(!noise_flag) i = tmp;
            noise_flag = true;
            flag = false;
        }
        else if(v[i]== 2)
        {
            flag = true;
            counter++;
        }
        else if(v[i]==1)
        {
            if(flag)
                counter ++;
        }
        else if(v[i]==-1)
        {
            if(!flag) continue;

            if(noise_flag)
            {
                noise_flag = false;
                counter++;
                tmp = i;
            }
            else
            {
                i = tmp;
                if(counter > max)
                    max = counter;
                counter = 0;
                flag = false;
                noise_flag = true;
            }
        }
        else if(v[i]==11)
        {
            if(flag)
            {
                counter ++;
            }

            else
            {
                tmp = i;
                counter ++;
                flag = true;
                noise_flag = false;
            }
        }
        else if(v[i]==10)
        {
            if(!flag) continue;

            if(noise_flag)
            {
                tmp = i;
                noise_flag = false;
                counter ++;
            }
            else
            {
                if(counter > max)
                    max = counter;
                counter = 0;
                flag = false;
                noise_flag = true;
                i = tmp;
            }
        }


    }

    cout << max;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
//    cin >> n;
    while(n--)
    {
        solve();
    }

    return 0;
}
