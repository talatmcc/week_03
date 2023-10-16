#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> dispatch;

        long long total = 0;
        int minimumChange = 0;

        for (int i = 0; i < n; i++)
        {
            long long L = i;
            long long R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    minimumChange++;
                    total += R;
                    dispatch.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if (L > R)
                {
                    minimumChange++;
                    dispatch.push_back(L - R);
                    total += L;
                }
                else
                {
                    total += R;
                }
            }
        }

        vector<long long> ans(n + 1);

        for (int i = minimumChange; i <= n; i++)
        {
            ans[i] = total;
        }

        sort(dispatch.begin(), dispatch.end(), greater<long long>());

        for (int i = minimumChange - 1; i >= 1; i--)
        {
            total -= dispatch.back();
            dispatch.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
