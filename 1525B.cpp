// @abir rahman sakin
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int a[n];
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s%3==0)cout<<0<<'\n';
    else if(n==1)cout<<1<<'\n';
    else{
        int ans=0;
        for(int i=0;i<n;i++){
            ll res=s-a[i];
            if(res%3==0){
                cout<<1<<'\n';
                return;
            }
        }
        cout<<3-s%3<<'\n';
    }
}
 
 
int main() {
    int t ;
    cin>>t;
    
    while (t--) {
        solve();
    }
    return 0;
}