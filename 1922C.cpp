#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>right(n);
        right[0]=0;
        right[1]=1;
        for(int i=2;i<n;i++)
        {
            if(v[i]-v[i-1]<v[i-1]-v[i-2])
            {
              right[i]=right[i-1]+1;
            }
            else
            {
                right[i]=right[i-1]+v[i]-v[i-1];
            }
        }

        vector<int>left(n);
        left[n-1]=0;
        left[n-2]=1;
        for(int i=n-3;i>=0;i--)
        {
            if(v[i+1]-v[i]<v[i+2]-v[i+1])
            {
              left[i]=left[i+1]+1;
            }
            else
            {
                left[i]=left[i+1]+v[i+1]-v[i];
            }
        }

        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            x=x-1;
            y=y-1;
            if(x<y)
            {
                cout<<right[y]-right[x]<<endl;
            }
            else
            {
                cout<<left[y]-left[x]<<endl;
            }
        }


    }
}