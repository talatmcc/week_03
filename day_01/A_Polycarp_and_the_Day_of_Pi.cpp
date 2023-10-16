#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while( t-- ){
        string a = "314159265358979323846264338327";
        string b;
        cin>>b;
        int i;
        for( i= 0; i<b.length(); i++){
            if(b[i] != a[i]){
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}