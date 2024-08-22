
#include<iostream>
using namespace std;
int main()
{
    int n,k,i,count = 0, team = 0;
    cin>>n>>k;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        a[i] = a[i] + k;
        if (a[i]<= 5)
        {
            count++;
        }
        if(count == 3)
        {
            team++;
            count = 0;
        }
    }
    cout<<team<<endl;
    return 0;
}