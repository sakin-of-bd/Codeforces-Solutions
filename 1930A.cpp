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
    n*=2;
    int arr[n];
    for (int ind=0; ind<n; ind++)
        {
            cin>>arr[ind];
        }

    sort(arr,arr+n);

    arr[n-1]=0;

    for (int ind=n-2; ind>=0; ind-=2)
        {
            arr[n-1]+=arr[ind];
        }
    cout<<arr[n-1]<<"\n";
    }
}