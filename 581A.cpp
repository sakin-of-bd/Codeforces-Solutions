#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[2];
   cin>>a[0]>>a[1];
   sort(a,a+2);
   cout<<a[0]<<" ";
   int x=a[1]-a[0];
   cout<<x/2<<endl;

}