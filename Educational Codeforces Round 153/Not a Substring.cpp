/*
    Problem: Regular Bracket Sequences
    Explanation: Given a bracket sequence 𝑠, you need to find a regular bracket sequence 𝑡 of length 2𝑛 such that 𝑠 does not occur 
    in 𝑡 as a contiguous substring. Print "YES" followed by 𝑡 if such a sequence exists, else print "NO".
    
    Author: darkflameace97 
    
    Approach:
    1. Read the number of test cases.
    2. For each test case:
       a. Read the input bracket sequence 𝑠.
       b. Check if 𝑠 is already a regular bracket sequence of length 2𝑛, if yes, print "NO".
       c. If not, print "YES" and construct a regular bracket sequence 𝑡 by either:
          i. Repeating '(' 𝑛 times followed by ')' 𝑛 times, or 
          ii. Repeating '()' 𝑛 times.
*/

#include <bits/stdc++.h>
using namespace std;

void solve(const string &s) {
    int n = s.size();

    if (s == "()") {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == ')' && s[i + 1] == '(') {
                for (int j = 0; j < n; j++) {
                    cout << "(";
                }
                for (int j = 0; j < n; j++) {
                    cout << ")";
                }
                cout << "\n";
                return;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << "()";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}

