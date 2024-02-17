#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;

        sum += temp;
    }

    cout << -(sum) <<endl;
    }
}
