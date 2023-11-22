#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string sortVowels(string s) {
    vector<int> vowelIndices;
    vector<char> vowels;

    // Find vowel indices and collect vowel characters
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelIndices.push_back(i);
            vowels.push_back(s[i]);
        }
    }

    // Sort the vowel characters in non-decreasing order
    sort(vowels.begin(), vowels.end());

    // Place the sorted vowels in their corresponding indices in the original string
    for (int i = 0; i < vowelIndices.size(); i++) {
        s[vowelIndices[i]] = vowels[i];
    }

    return s;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string result = sortVowels(s);
    cout << "Result: " << result << endl;

    return 0;
}