//@sakin_of_bd
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=-1;
        for(ll i=2;i<=100;i++){
            bool bb=false;
            for(ll j=0;j<n;j++){
                if(__gcd(v[j],i)==1){
                    bb=true;
                    break;
                }
            }
            if(bb==true){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
