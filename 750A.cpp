#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int k=240-n;
    int sum=0,j=0;
    for(int i=1;i<=m;i++)
    {
        sum+=5*i;
        
        if(sum>k)
        break;

        j++;
    }
    cout<<j;
}