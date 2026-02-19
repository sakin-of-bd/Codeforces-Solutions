#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string pressedKeys, typedString;
        cin >> pressedKeys;

        for (char key : pressedKeys) {
            if (key == 'b') {
                // Backspace for lowercase letter
                if (!typedString.empty() && islower(typedString.back())) {
                    typedString.pop_back();
                }
            } else if (key == 'B') {
                // Backspace for uppercase letter
                if (!typedString.empty() && isupper(typedString.back())) {
                    typedString.pop_back();
                }
            } else {
                // Normal character, add to the string
                typedString += key;
            }
        }

        cout << typedString << endl;
    }

    return 0;
}