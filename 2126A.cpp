#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int>v;
        while(s>0){
            v.push_back(s%10);
            s=s/10;
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
}