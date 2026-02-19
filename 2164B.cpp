//@sakin_of_bd
//"ever tried, ever failed,
//no matter,
//try again. fail again. fail better......"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flg=0;
    int a,b;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((v[j]%v[i])%2==0 && v[i]<v[j] && v[i]!=v[j]){
                flg=1;
                a=v[i];
                b=v[j];
                break;
            }
        }
    }
    if(flg==0){
        cout<<-1<<endl;
    }
    else{
        cout<<a<<" "<<b<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    while (TC--) {
        solve();
    }
}