#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h1, a1, c1, h2, a2;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;
    int strikes = ceil(double(h2) / a1);
//    cout << "str : " << strikes << "\n";
    int heal = 0;
//    cout << ceil(double(h1) / a2) << "\n";
    while(ceil(double(h1) / a2) <= strikes-1)
    {
//        cout << "yes\n";
//        cout << ceil(double(h1) / a2) << "\n";
        heal++;
        h1 += c1;
        h1 -= a2;
    }
//    cout << heal;

    cout << heal + strikes << "\n";
    for(int i=0; i<heal; i++)
        cout << "HEAL\n";
    for(int i=0; i<strikes; i++)
        cout << "STRIKE\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    int t; cin >> t;
//    for(int i=0; i<t; i++)
    solve();



    return 0;
}
