#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        string a;
        cin>>a;
        int n;
        cin>>n;
        string b,c;
        cin>>b;
        cin>>c;
        for(int i=0;i<n;i++){
            if(c[i]=='V'){
                a=b[i]+a;
            }
            else{
                a=a+b[i];
            }
        }
        cout<<a<<endl;
    }
}