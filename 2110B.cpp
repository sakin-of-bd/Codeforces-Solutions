#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flg=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
               cnt++;
            }
            else{
                cnt--;
            }

            if(cnt==0 && i!=s.size()-1){
                flg=1;
                break;
            }
        } 
  
         if(flg==1){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
    }
}