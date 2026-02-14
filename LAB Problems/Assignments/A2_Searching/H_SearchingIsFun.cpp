#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        long long k, x;
        cin >> k >> x;

        long long ans = k + (k - 1) / (x - 1);
        cout << ans << "\n";
    }
}
