/*
    Author: darkflameace97

    Problem:
    Given an array of people's preferences, count the number of people with preferences higher than their position.

    Approach:
    - For each test case, iterate through the preferences array.
    - Keep track of the minimum preference encountered so far.
    - If the current preference is greater than the minimum and within valid range, increment the count.
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int minValue = n + 1, badCount = 0;  
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] < minValue) {
            minValue = p[i];
        } else if (p[i] < n + 1) {
            badCount++;
        }
    }
    
    cout << badCount << "\n";  
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
