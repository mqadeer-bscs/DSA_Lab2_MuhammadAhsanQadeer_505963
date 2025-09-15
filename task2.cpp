#include <iostream>
using namespace std;

int occurrence(string s, string sub) {
    for (int i = 0; i < s.length() - sub.length() + 1; i++) {
        if (s.substr(i, sub.length()) == sub)
            return i;
    }
    return -1; 
}

int main() {
    string text = "I am awesome";

    cout << "Pattern at beginning: " 
         << occurrence(text, "I") << endl;

    cout << "Pattern at the end: " 
         << occurrence(text, "ome") << endl;

    cout << "Pattern not present: " 
         << occurrence(text, "hamza") << endl;

    cout << "Empty pattern: " 
         << occurrence(text, "") << endl;

    return 0;
}