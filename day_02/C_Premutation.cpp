#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, m;

    cin >> t;

    while (t--)
    {
        cin >> n;
        ll ans[n + 1];

        vector<ll> pos[n+1];

        m = n;

        while (m--)
        {
            for (i = 1; i <= n - 1; i++)
            {
                int x;
                cin >> x;

                pos[x].push_back(i);
            }
        }

        for (i = 1; i <= n; i++)
        {
            sort(pos[i].begin(), pos[i].end());
        }

        for (i = 1; i <= n; i++)
        {
            if (pos[i][n - 2] == n - 1)
            {
                if (pos[i][0] == n - 1)
                {
                    ans[n] = i;
                }
                else
                {
                    ans[n - 1] = i;
                }
            }
            else
            {
                ans[pos[i][n - 2]] = i;
            }
        }

        for (i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}