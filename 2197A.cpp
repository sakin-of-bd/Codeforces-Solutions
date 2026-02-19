//@sakin_of_bd
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        cin >> x;

        int count = 0;

        for (long long y = x; y <= x + 90; y++)
        {

            long long temp = y;
            int sum = 0;

            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }

            if (y - sum == x)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
