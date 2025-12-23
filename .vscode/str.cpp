
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, result = "";
    int n;

    // 1. Take input for the first string (entire line)
    if (!getline(cin, s1)) return 0;

    // 2. Take input for the second string (entire line)
    if (!getline(cin, s2)) return 0;

    // 3. Take input for the number n
    if (!(cin >> n) || n <= 0) {
        cout << s1 << endl; // Output original if n is invalid
        return 0;
    }

    // 4. Iterate through the first string and build the result
    for (int i = 0; i < s1.length(); i++) {
        result += s1[i]; // Add character from s1

        // Check if we have reached n characters
        // (i + 1) is used because loop index starts at 0
        if ((i + 1) % n == 0) {
            result += s2; // Append the second string
        }
    }

    // 5. Output the final resulting string
    cout << result << endl;

    return 0;
}
