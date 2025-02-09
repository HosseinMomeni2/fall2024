#include <bits/stdc++.h>
using namespace std;

#define ll long long

int find_pow2(ll x)
{
    if(x == 0  ||  x == 1) return 0;

    int otp = 0;
    ll mul = 1;
    while(true)
    {
        if(2*mul >= x)
            return otp+1;

        otp ++;
        mul *= 2;
    }
}

ll pow2(int k)
{
    ll otp = 1;
    for(int i=0; i<k; i++)
        otp *= 2;
    return otp;
}

void solve()
{
    ll x, otp=0;
    ll m;
    cin >> x >> m;

    int k = find_pow2(x);
    ll pow = pow2(k);
    ll pox = pow * x;
    otp += m / pox;
    otp *= pow;

    if(x&1) otp++;

    if(pox != 1)
        while(true)
        {
//            cout << pow;
            if(pox >= sqrt(m))
                break;

            pox *= pow;
        }

    for(ll i = pox+1; i<=m; i++)
    {
        ll zor = i ^ x;
        if(zor%i == 0  ||  zor%x == 0)
            otp ++;
    }

    cout << otp << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while(n--) solve();

//    for(int i=0; i<18; i++)
//        cout << i << " : " << find_pow2(i) << endl;


//    for(int i=1; i<20; i++)
//        for(int j=1; j<1000; j++)
//        {
//            int zor = i ^ j;
//            cout << i << "^" << j << " = " << zor;
//            if(zor%i == 0  ||  zor%j == 0) cout << "  ***";
//            cout << endl;
//        }


//    int a = 4; int b = 6;
//    cout << int(a ^ b) ;

    return 0;
}
