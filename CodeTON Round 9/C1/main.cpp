#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int x, count=0;
    ll m;
    cin >> x >> m;
    for(int i=1; i<2*x; i++)
    {
        int zor = i ^ x;
        if(zor != 0)
            if(i%zor==0  ||  x%zor==0)
            {
                if (i <= m)
                    count++;
                else break;
            }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    cin >> n;
    while(n--) solve();


//    for(int i=2; i<100; i+=2)
//        for(int j=1; j<100; j++)
//        {
//            int zor = i ^ j;
//            cout << i << "^" << j << " = " << zor;
//            if(zor != 0)
//                if(i%zor == 0  ||  j%zor == 0) cout << "  ***";
//            cout << endl;
//        }


//    int a = 4; int b = 6;
//    cout << int(a ^ b) ;

    return 0;
}
