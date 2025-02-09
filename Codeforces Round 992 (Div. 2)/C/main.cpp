#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cint(n) int n;cin>>n;

void solve()
{
    int n; ll k; cin >> n >> k;
    k--;
    string k_bin;

    ll count_all = 1;
    for(int i=0; i<min(n-1, 42); i++)
    {
        count_all *= 2LL;
    }
//    cout << "count_all = " << count_all << endl; ///debug
    if(count_all < k+1)
    {
        cout << "-1\n";
        return;
    }

//    cout << "k ; " << k << endl;///debug
    while(k)
    {
        k_bin.insert(k_bin.begin(), k%2 + '0');
        k = k>>1;
//        cout << k; ///debug
//        cout << "   k_bin : " << k_bin << endl; ///debug
    }


    while(k_bin.size() < n-1) {
        k_bin = "0" + k_bin;
    }
//    cout << "k_bin : " << k_bin << endl; ///debug

    vector<int> v(n);
    int i=0, j=n-1;
    for(int c=0; c<n; c++)
    {
        if(k_bin[c] == '0')
        {
            v[i++] = c+1;
        }
        else
        {
            v[j--] = c+1;
        }

        if(i == j)
        {
            v[i] = n;
            break;
        }
    }

    for(auto x : v) cout << x << ' '; cout << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

//void test()
//{
//    vector<int> v = {1,2,3,4,5,6};
//    const int n = 6;
//
//    int i=1;
//    while(true)
//    {
//        int sum = 0;
//        for(int i=0; i<n; i++)
//        {
//            int m = v[i];
//            for(int j=0; j<n-i; j++)
//            {
//                sum += *min_element(v.begin()+i, v.begin()+i+j+1);
//            }
//
//        }
//
//        cout << i++ << ".  ";for(auto x : v) cout << x << " "; cout << " ---> " << sum;
//        if(sum == 56) cout << " *** "; cout << '\n';
//
//        if(!next_permutation(v.begin(), v.end())) break;
//    }
//}