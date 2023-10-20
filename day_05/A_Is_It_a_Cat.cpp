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
        string s;
        cin >> s;
        string T = "meow";

        //converting all the characters to lower case
        for (int i = 0; i < n; i++)
        {
            if (s[i] <= 90)
                s[i] += 32;
        }

        string ss = "";

        for (int i = 0; i < n; i++)
        {
            //if the current char is not equal to the previous one
            if (ss.empty() or ss.back() != s[i])
            {
                ss.push_back(s[i]);
            }
        }

        if (ss == T)
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