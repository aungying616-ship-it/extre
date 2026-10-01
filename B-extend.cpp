#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool isValid = true;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] < s[i - 1]) {
            isValid = false;
            break;
        }
    }
    if (isValid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
