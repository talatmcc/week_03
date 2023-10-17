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
        int ar[n + 5];
        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        sort(ar + 1, ar + 1 + n);
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            int val = ar[i];
            if (mp[val] != 0)
            {
                count++;
                // cout<< i <<"==="<<count<<endl;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}