#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],odd_cnt=0;
        long long even_sum=0;
        vector<int>odd(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                odd[i]=a[i];
                odd_cnt++;
            }
            else{
                even_sum+=a[i];
            }
        }
        if(odd_cnt==0){
            cout<<0<<endl;
        }
        else{
            sort(odd.begin(),odd.end());
            reverse(odd.begin(),odd.end());
            long long odd_sum=0;
            if(odd_cnt%2==0){
                for(int i=0;i<(odd_cnt/2);i++){
                       odd_sum+=odd[i];            
                 }
            }
            else{
                for(int i=0;i<=(odd_cnt/2);i++){
                       odd_sum+=odd[i];            
                 }
            }
            cout<<even_sum+odd_sum<<endl;
        }
        
    }
}