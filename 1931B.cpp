#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int testcase =0;

void solve(){
    int n;cin>>n;
    int arr[n];
    ll sum =0;
    for(int i =0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    ll avg = sum/n;
    ll ex =0;

    for(int i =0; i<n; i++){
        ex+=(arr[i]-avg);

        if(ex<0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll tc =1;
    cin >> tc;
    while(tc--){
        testcase++;
        solve();
    }
    return 0;
}
