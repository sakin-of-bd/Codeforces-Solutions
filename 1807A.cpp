#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
       int a[3];
       cin>>a[0]>>a[1]>>a[2];
       if(a[0]+a[1]==a[2])
       {
        cout<<'+'<<endl;
       }
       else
       {
        cout<<'-'<<endl;
       }
    }
}