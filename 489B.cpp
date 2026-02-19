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
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int m;
    cin>>m;
    vector<int>g(m);
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());

    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i]==g[j] || (b[i]+1)==g[j] || b[i]==(g[j]+1)){
               cnt++;
               g[j]=-10;
               break;
            }
        }
    }
    cout<<cnt<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    while (TC--) {
        solve();
    }
}