#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int nOne=0,pOne=0,zero=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==-1){
                nOne++;
            }
            else if(arr[i]==1){
                pOne++;
            }
            else{
                zero++;
            }
        }
        int oper=0;
        oper+=zero;
        if(nOne%2==1){
            oper+=2;
        }
        cout<<oper<<endl;

    }
}