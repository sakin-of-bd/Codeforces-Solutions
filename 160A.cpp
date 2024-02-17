#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long n,m,i,j,sum,cnt,ans;
        cin>>n;
        long long a[n];
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+n);
        cnt=0;
        ans=0;
        for(j=n-1;j>=0;j--)
        {
            ans+=a[j];
            cnt++;
            if(ans>sum)
                break;
        }
        cout<<cnt<<endl;
    
}