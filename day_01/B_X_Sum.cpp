#include <bits/stdc++.h>
using namespace std;

int call(int x, int y, int n, int m, int arr[201][201]){
    int sum = arr[x][y];
    int index = 1;
    while (x - index >-1 && y - index > -1) {
        sum += arr[x - index][y - index];
        index++;
    }
    index = 1;
    while (x - index > -1 && y + index < m) {
        sum += arr[x - index][y + index];
        index++;
    }
    index = 1;
    while (x + index < n && y - index > -1) {
        sum += arr[x + index][y - index];
        index++;
    }
    index = 1;
    while (x + index < n && y + index < m) {
        sum += arr[x + index][y + index];
        index++;
    }
    // sum = sum - (3* arr[x][y]);
    // cout << sum <<" ";
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[201][201];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, call(i, j, n, m, arr));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
