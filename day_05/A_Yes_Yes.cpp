#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        n = s.size();
        string m = "";
        for (int i = 1; i <= 100; i++)
        {
            m = m + "Yes";
        }
        bool ok = false;

        // for (int i = 0; i < m.size(); i++)
        // {
        //     if (i + n - 1 < m.size() and m.substr(i, n) == s)
        //     {
        //         ok = true;
        //         break;
        //     }
        // }
        if(m.find(s) != std::string::npos){
            ok = true;
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