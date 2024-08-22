#include <bits/stdc++.h>
using namespace std;
#define fs(i,n) for(int i=1;i<n;i++)

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    fs(i,n){
        cin>>a[i];
    } 
    bool flag=false;
       for(int i=1;i<=t;i=i+a[i]){
    if(i==t){
        cout<<"YES"<<endl;
        flag=true;
    break;}
   
          }   
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
}

