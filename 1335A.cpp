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
       
        if(a[i]==1 || a[i]==2)
        {
        cout<<0<<endl;
        }
        else if(a[i]>2)
        {
        if(a[i]%2==0)
        {
        cout<<(a[i]/2)-1<<endl;
        }
        else
        {
            cout<<(a[i]/2)<<endl;
        }
        }   
    }
}