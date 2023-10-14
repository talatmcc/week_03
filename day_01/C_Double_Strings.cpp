#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        map<string, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;
        }

        string ans(n, '0');

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < v[i].size(); j++) {  
                string x = v[i].substr(0, j);
                string y = v[i].substr(j, v[i].size() - j);  
                
                if (freq[x] > 0 && freq[y] > 0) {
                    ans[i] = '1';
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
