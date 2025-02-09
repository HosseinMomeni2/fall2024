#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double


bool is_pow2(int n)
{
    if(n == 1 || n == 2)
        return true;
    if(n%2 != 0)
        return false;

    return is_pow2(n/2);
}

void fill(vector<int> *v, int max_0)
{
    v->push_back(-1);
    int otp = 0;
    for(int i=1; otp<=max_0; i++)
    {
        if(is_pow2(i))
            v->push_back(otp);
        else v->push_back(++otp);
    }
}


void solve()
{
    string s; cin >> s;
    int size = s.size();
    int cnt=0, otp=0;
    for(int i=0; i<size; i++)
    {
        if(s[i] == '0')
        {
            cnt ++;
            continue;
        }

        int current_num = 0;
        int len = 0;
        for(int j=i; j<size; j++)
        {
            current_num *= 2;
            current_num += s[j] - '0';
            len ++;

            if(current_num > len + cnt)
                break;

            otp ++;
        }
        cnt = 0;
    }

    cout << otp << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout << setprecision(0);
    ll T=1;
    cin >> T;
    while(T--)
        solve();


//    string s = "000101";
//    int n = stol(s, nullptr, 2);
//    cout << n;

    return 0;
}
