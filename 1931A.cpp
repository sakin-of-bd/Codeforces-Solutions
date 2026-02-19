#include<bits/stdc++.h>
#define ll long long;
#define fs(i,n) for(int i=0;i<n;i++)
#define fp(i,n) for(int i=n;i>=0;i--)
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    vector<char>v(27);
    char ch='a';
    for(int i=1;i<=26;i++)
    v[i]=ch++;

    if(n<=28)
    {
        int temp=n-2;
        cout<<"aa"<<v[temp]<<endl;
    }
    else if(n<=53)
    {
        n=n-26;
        int temp=n-1;
        cout<<"a"<<v[temp]<<"z"<<endl;
    }  
    else if(n<=79)
    {
        n=n-52;
        cout<<v[n]<<"zz"<<endl;
    }  
   }
}