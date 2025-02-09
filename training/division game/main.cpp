#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> div(n, 0);
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        div[i] = x;

//        for(int j=2; j<=x; j++)
//            if(x % j == 0)
//                div[i] ++;
    }
//    for(auto x : div) cout << x << " " ;cout << endl; ///debug

    int zor = 0;
    for(auto x : div)
        zor = zor ^ x;

//    cout << zor << endl; ///debug
    if(zor) cout << "Anna";
    else cout << "Bruno";
}

int main() {
    solve();
    return 0;
}

///https://atcoder.jp/contests/abc368/tasks/abc368_f