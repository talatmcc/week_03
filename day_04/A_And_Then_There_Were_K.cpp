#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        while(n>1){
            n>>=1;
            count++;
        }
        int p = 1 <<count;
        cout<< p-1 <<endl;
    }
    return 0;
}