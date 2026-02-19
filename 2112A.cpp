#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (abs(b - c) < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            
                if (a > b && a < c && b<c)
                {
                    cout << "NO" << endl;
                }
               
                else if (a > c && a < b && b>c)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            
        }
    }
}