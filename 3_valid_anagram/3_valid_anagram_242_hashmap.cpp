#include<iostream>
#include<cctype>
#include <unordered_map>
using namespace std;

bool anagram(string& s, string& t) {
    if (s.length() != t.length()) return false;

    // Convert both strings to lowercase
    for (char& c : s) {
        c = tolower(c);
    }
    for (char& c : t) {
        c = tolower(c);
    }

    unordered_map<char, int> count;

    // Count frequencies of characters in the first string
    for (char c : s) {
        count[c]++;
    }

    // Check if the second string has the same characters with matching frequencies
    for (char c : t) {
        if (count.find(c) == count.end()) {
            return false;
        }
        count[c]--;

        // If the frequency goes negative, it's not an anagram
        if (count[c] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (anagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    }
    else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}
