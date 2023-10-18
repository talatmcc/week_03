#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map <string , bool> mp;
        int j=0;
        int ans = 0;
        for( int i=1; i<n; i++){
            string sub = s.substr(j,2);
            if(!mp[sub]){
                mp[sub] =true;
                ans++;
            }
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}