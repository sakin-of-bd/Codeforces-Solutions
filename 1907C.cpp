#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>freq;
        int maxFreq=0;
        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
            maxFreq=max(maxFreq,freq[s[i]]);
        }
        if(maxFreq*2>n)
        {
          cout<<(maxFreq+maxFreq-n)<<endl;
        }
        else
        cout<<n%2<<endl;

    }
}