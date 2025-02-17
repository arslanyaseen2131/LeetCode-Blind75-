#include <iostream>

using namespace std;

// Function to convert a string to lowercase
void toLowerCase(string &s) {
    for (char &c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += ('a' - 'A');  // Convert uppercase to lowercase
        }
    }
}

// Simple Bubble Sort function to sort a string
void bubbleSort(string &s) {
    int n = s.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                swap(s[j], s[j + 1]); // Swap characters if they are in the wrong order
            }
        }
    }
}

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;  // If lengths are different, not an anagram

    toLowerCase(s);  // Convert to lowercase
    toLowerCase(t);  

    bubbleSort(s);  // Sort first string manually
    bubbleSort(t);  // Sort second string manually

    return s == t;  // Compare sorted strings
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams.\n";
    } else {
        cout << "The strings are NOT anagrams.\n";
    }

    return 0;
}
