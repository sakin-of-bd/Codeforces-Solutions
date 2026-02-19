#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,cnt;
    cin>>a>>b;
    cnt = a;
    while (a>=b)
    {
        a = (a-b)+1;
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}