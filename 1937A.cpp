#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a=log2(x);
        long long p=pow(2,a);
        cout<<p<<endl;
    }
}