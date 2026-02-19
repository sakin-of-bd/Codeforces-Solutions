#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum=0;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=2;i<n/2;i++)
        {
            
            if(i%3!=0 && (n-i-1)%3!=0 && n-i-1>1)
            {
                int p=n-(n-1);
                cout<<"YES"<<endl;
                cout<<i<<" "<<(n-i-1)<<" "<<p<<endl;
                sum=1;
                break;
                

            }
        }
        if(sum!=1)
            {
                cout<<"NO"<<endl;
            }
    }
}
