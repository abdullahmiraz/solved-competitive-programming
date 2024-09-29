
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    int taxis = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x == 1   ? cnt1 += 1
        : x == 2 ? cnt2 += 1
        : x == 3 ? cnt3 += 1
                 : cnt4 += 1;
    }
    taxis += cnt4;
    taxis += cnt3;
    if (cnt1 >= cnt3)
        cnt1 -= cnt3;
    else
        cnt1 = 0;

    taxis += cnt2 / 2;
    if (cnt2 % 2 == 1) {
        taxis += 1;
        if (cnt1 >= 2) {
            cnt1 -= 2;
        } else {
            cnt1 = 0;
        }
    }

    taxis += cnt1 / 4;
    if (cnt1 % 4 != 0) {
        taxis += 1;
    }

    cout << taxis << endl;

    // cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << endl ;
    // cout << 2/1 << endl ;
}
