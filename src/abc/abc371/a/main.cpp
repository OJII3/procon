#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }
    // AB, AC, BC

    // A < B < C
    // A < C < B
    // B < A < C
    // B < C < A
    // C < A < B
    // C < B < A

    if (s[0] == "<" && s[1] == "<" && s[2] == "<") {
        // A < B < C
        cout << "B" << endl;
    } else if (s[0] == "<" && s[1] == "<" && s[2] == ">") {
        // A < C < B
        cout << "C" << endl;
    } else if (s[0] == ">" && s[1] == "<" && s[2] == "<") {
        // B < A < C
        cout << "A" << endl;
    } else if (s[0] == ">" && s[1] == ">" && s[2] == "<") {
        // B < C < A
        cout << "C" << endl;
    } else if (s[0] == "<" && s[1] == ">" && s[2] == ">") {
        // C < A < B
        cout << "A" << endl;
    } else if (s[0] == ">" && s[1] == ">" && s[2] == ">") {
        // C < B < A
        cout << "B" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
