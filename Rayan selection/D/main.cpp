#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<int>> otp;
    int n; cin >> n;
    int z=0, o=0, t=0;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        switch (v[i]) {
            case 0 :
                z++;
                break;
            case 1:
                o++;
                break;
            case 2:
                t++;
                break;
            default:
                break;
        }
    }
    cout << "z, o, t : " << z << ' ' << o << ' ' << t << endl;
    cout << "step0 : "; for(auto x : v) cout << x << ' '; cout << endl;


    ///step1;
    int iz=0, io=z, it=z+o;
    for(io=z; io<z+o; io++)
    {
//        cout<< io << endl;
        if(v[io] == 0)
        {
            for(; iz<z; iz++)
            {
//                cout << "here1" << endl;
                if(v[iz] == 1)
                {
//                    cout << "here2" << endl;
                    v[iz]=0; v[io]=1;
                    vector<int> temp = {iz+1, io+1};
                    otp.push_back(temp);
                    break;
                }
            }
        }
        else if(v[io] == 2)
        {
            for(; it<n; it++)
            {
                if(v[it] == 1)
                {
                    cout << "here" << endl;
                    v[it]=2; v[io]=1;
                    vector<int> temp = {io+1, it+1};
                    otp.push_back(temp);
                    break;
                }
            }
        }
    }
    cout << "step1 : "; for(auto x : v) cout << x << ' '; cout << endl;


    ///step2
    iz=0, io=z, it=z+o;
    for(iz=0; iz<z; iz++)
    {
        v[iz] == 1;
        for(; it<n; it++)
        {
            if(v[it] == 0)
            {
                v[it] = 1;
                v[iz] = 0;
                vector<int> temp = {iz+1, it+1};
                otp.push_back(temp);
                break;
            }
        }
    }
    cout << "step2 : ";for(auto x : v) cout << x << ' '; cout << endl;


    ///step3
    iz=0, io=z, it=z+o;
    for(;it<n; it++)
    {
        if(v[it] == 1)
        {
            cout << "here1" << endl;
            for(; io<z+o; io++)
            {
                if(v[io] == 2)
                {
                    cout << "here2" << endl;
                    v[it] = 2;
                    v[io] = 1;
                    vector<int> temp = {io+1, it+1};
                    otp.push_back(temp);
                    break;
                }
            }
        }
    }
    cout << "step3 : ";for(auto x : v) cout << x << ' '; cout << endl;

    ///step4
    iz=0, io=z, it=z+o;
    int ind1 = z;
    for(; iz<z; iz++)
    {
        if(v[iz] == 2)
        {
            v[ind1] = 2;
            v[iz] = 1;
            ind1 = iz;
            break;
        }
    }
    cout << "step4.1 : ";for(auto x : v) cout << x << ' '; cout << endl;

    bool isOneInZ = true;
    while(v[z] != 1)
    {
        if(isOneInZ)
        {
            for(; it<n; it++)
            {
                if(v[it] == 0)
                {
                    v[ind1] = 0;
                    v[it] = 1;
                    isOneInZ = false;
                    vector<int> temp = {ind1+1, it+1};
                    otp.push_back(temp);
                    ind1 = it;
                    break;
                }
            }
        }
        else
        {
            for(; iz<n; iz++)
            {
                if(iz == 2)
                {
                    v[ind1] = 2;
                    v[iz] = 0;
                    isOneInZ = true;
                    vector<int> temp = {iz+1, ind1+1};
                    otp.push_back(temp);
                    ind1 = iz;
                    break;
                }
            }
        }
    }
    cout << "step4.2 : ";for(auto x : v) cout << x << ' '; cout << endl;

    cout << otp.size();
    for(auto x : otp)
        cout << x[0] << ' ' << x[1] << '\n';
}

int main() {
    int n = 1;
//    cin >> n;
    while(n--)
        solve();

    return 0;
}