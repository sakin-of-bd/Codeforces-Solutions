#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m;
        int last_time=0,last_side=0,point=0;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            
            int curr_time=x-last_time;
            if(last_side==0){
                point+=curr_time;
                if(y==1){
                    if(curr_time%2==0){
                        point--;
                    }
                }
                else{
                    if(curr_time%2==1){
                        point--;
                    }
                }
            }
            else{
                point+=curr_time;
                if(y==0){
                    if(curr_time%2==0){
                        point--;
                    }
                }
                else{
                    if(curr_time%2==1){
                        point--;
                    }
                }
            }
            last_time=x;
            last_side=y; 
        }
        point+=m-last_time;
        cout<<point<<endl;
    }
}