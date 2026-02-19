#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e,o,even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
            e=i+1;
        }
        else
        {
            odd++;
            o=i+1;
        }
    }
    if(even>odd)
    {
        cout<<o;
    }
    else
    {
        cout<<e;
    }
    
}