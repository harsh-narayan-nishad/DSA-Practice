/*
Problem Statement:
Find Last Occurrence of a Character
You are given a string s of length n and a character ch.
Your task is to find the index of the last occurrence of the character ch in the string s.

If the character is not found in the string, return -1.

The string is 0-indexed.
*/

#include <bits/stdc++.h>
using namespace std;

class LastOccurrenceFinder {
public:
    int findLastOccurrence(string str, char ch) {
        int index = -1;  // default if not found

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch) {
                index = i;  // update whenever found
            }
        }
        return index;
    }
};

int main() {
    string str = "Leetcode";
    char ch = 'e';
    // cin >> str >> ch;

    LastOccurrenceFinder finder;
    int ans = finder.findLastOccurrence(str, ch);
    cout << ans << endl;

    return 0;
}
