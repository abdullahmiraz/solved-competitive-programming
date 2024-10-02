#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> pz(m);

    for (int i = 0; i < m; i++) {
        cin >> pz[i];
    }

    sort(pz.begin(), pz.end());

    int mndif = 1e9;

    for (int i = 0; i <= m - n; i++) {
        int curDif = pz[i + n - 1] - pz[i];
        mndif = min(mndif, curDif);
    }
    cout << mndif << endl;

    return 0;
}
