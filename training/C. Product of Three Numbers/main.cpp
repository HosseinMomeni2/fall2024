#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for(int i=0; i<(n); i++)
#define cint(n) int (n); cin >> (n);

void solve()
{
    cint(n);
    int nsq = sqrt(n);nsq++;

    int a = 0, b = 0;
    for(int i=2; i<=nsq; i++)
    {
        if(!(n%i))
        {
            if(!a)
            {
                a = i;
            }
            else if(!b)
            {
                if((n/a) % i  ==  0)
                {
                    b = i;
                    break;
                }
            }
        }
    }
    if(a!=0 && b!=0)
    {
        int c = n/(a*b);
        if(c==a  ||  c==b  ||  c==1) b = 0;
    }

    if(b) cout << "YES\n" << a << ' ' << b << ' ' << n/(a*b) << '\n';
    else cout << "NO\n";
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
