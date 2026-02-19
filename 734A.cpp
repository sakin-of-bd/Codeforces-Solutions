#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    cin>>a;

    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            sum1++;
        }
        else if(a[i]=='D')
        {
            sum2++;
        }
    }
    if(sum1>sum2)
    {
        cout<<"Anton";
    }
    else if(sum1<sum2)
    {
        cout<<"Danik";
    }
    else if(sum1==sum2)
    {
        cout<<"Friendship";
    }


}
