
/*******************************************************************************************
*                                আমাকে আমার মতো থাকতে দাও,                             * 
**                           আমি নিজেকে নিজের মতো গুছিয়ে নিয়েছি।                         **
***                           যেটা ছিলনা ছিলনা সেটা না পাওয়াই থাক,                         ***
****                                  সব পেলে নষ্ট জীবন।                                 **** 
*********************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n, 0));

        vector<string> li(n);
        for (int i = 0; i < n; ++i) {
            cin >> li[i];
        }

        int triangle = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - 1; ++j) {
                if (li[i][j] == '1') {
                    if (li[i][j - 1] == '0' && li[i][j + 1] == '0') {
                        triangle = 1;
                        break;
                    }
                }
            }
        }

        if (triangle == 1) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }

        t--;
    }

    return 0;
}
