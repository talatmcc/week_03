
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         map<char, ll> f_occ;
//         map<char, ll> s_occ;
//         map<string, ll> occ;
//         vector<string> a(n);
//         for (int i = 0; i< n ; i++)
//         {
//             cin >> a[i];
//             f_occ[a[i][0]]++;
//             s_occ[a[i][1]]++;
//             occ[a[i]]++;
//         }

//         ll ans = 0;

//         for (int i = 0; i< n ; i++)
//         {
//             ll x = max((ll)0, f_occ[a[i][0]] - occ[a[i]]);
//             ans += x;
//             x = max((ll)0, s_occ[a[i][1]] - occ[a[i]]);
//             ans += x;
//             if (f_occ[a[i][0]] > 0)
//                 f_occ[a[i][0]]--;
//             if (s_occ[a[i][1]] > 0)
//                 s_occ[a[i][1]]--;
//             if (occ[a[i]] > 0)
//                 occ[a[i]]--;
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        map<char, ll> start, fin;
        map<string, ll> s;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += (start[v[i][0]] + fin[v[i][1]] - 2 * s[v[i]]);
            // cout<<"it====="<<v[i]<<" "<< i << " =========== "<<ans<<endl;
            start[v[i][0]]++;
            fin[v[i][1]]++;
            s[v[i]]++;
        }

        cout << ans << endl;
    }
    return 0;
}
