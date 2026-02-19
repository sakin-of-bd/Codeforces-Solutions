#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        if((v[0]+v[n-1])%2==0){
            cout<<0<<endl;
        }
        else{
            int countl=0,countr=0;
            for(int i=0;i<n;i++){
                for(int j=n-1;j>=0;j--){
                    if((v[i]+v[j])%2==1){
                         countl++;
                         //cout<<countl<<" ";
                    }
                    else{
                        break;
                    }
                }
                break;
            }

            for(int i=n-1;i>=0;i--){
                for(int j=0;j<n;j++){
                    if((v[i]+v[j])%2==1){
                         countr++;
                         //cout<<countr<<" ";
                    }
                    else{
                        break;
                    }
                }
                break;
            }
            //cout<<endl<<"ans "<<countl<<" "<<countr<<" "<<min(countl,countr)<<endl;

            cout<<min(countl,countr)<<endl;


        }
            
        
    }
}