#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,p[6];
    int a, b, c;
    cin>>a>>b>>c;

    p[0] = a*b+c;
    p[1] = a+b*c;
    p[2] = a*(b+c);
    p[3] = (a+b)*c;
    p[4] = a+b+c;
    p[5] = a*b*c;
 
    sort(p, p+6);
 
    cout<<p[5];
    return 0;
  
} 
