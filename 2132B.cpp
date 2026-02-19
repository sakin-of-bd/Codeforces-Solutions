#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        vector<unsigned long long int>ans;
       unsigned long long int tenn=10;
        while(tenn<n){
            if(n%(tenn+1)==0){
               ans.push_back(n/(tenn+1));
            }
            tenn*=10;
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(unsigned long long i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}