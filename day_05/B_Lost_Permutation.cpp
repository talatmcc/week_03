#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;

        // array input
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<bool> taken(1111, false);

        for (int i = 0; i < m; i++)
            taken[b[i]] = true;

        int mx = *max_element(b.begin(), b.end());
        // cout<<mx<<endl;

        int sum = 0;
        bool ok = false;
        bool imp = false;
        // int curr = 1;

        for (int i = 1; i <= s; i++)
        {
            if (!taken[i])
            {
                sum += i;
                taken[i] = true;
            }

            if (sum == s )
            {
                for (int i = 1; i <= mx; i++)
                {
                    if (!taken[i])
                    {
                        imp = true;
                        break;
                    }
                }
                if (!imp)
                {
                    ok = true;
                }
                // break;
            }

            if (sum > s)
                break;
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}