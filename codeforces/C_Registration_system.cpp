#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> stringCnt;
    int n;
    cin >> n;

    while (n--) {
        string input;
        cin >> input;

        if (stringCnt[input] == 0) {
            cout << "OK" << endl;
        } else {
            cout << input <<   stringCnt[input] << endl;
        }
        stringCnt[input]++;
    }
}