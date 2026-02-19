#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Find the first non-digit character from the end using a reverse iterator
        auto it = find_if_not(rbegin(s), rend(s), ::isdigit);

        // Extract the username
        string username = s.substr(0, distance(it, rend(s)));

        // Print the valid username (or the entire ID if it's already a valid username)
        cout << (any_of(username.begin(), username.end(), ::isalpha) ? username : s) << endl;
    }

    return 0;
}