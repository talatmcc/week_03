#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans = 1;
        while(k--){
            ans = ((ans % mod) * (n% mod)) % mod;
        }
        cout<<ans<<endl;
        // long long val = pow(n,k);
        // cout<<(val % mod)<<endl;
    }
    return 0;
}