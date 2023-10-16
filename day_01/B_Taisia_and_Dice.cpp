#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s, r, val;
        cin >> n >> s >> r;

        val = s - r;
        
        cout << val << " ";

        for (int i = 2;  i<= n; i++)
        {
            while (r - val < n - i)
            {
                val--;
            }
            cout << val << " ";
            r = r - val;
        }
        cout << "\n";
    }
}