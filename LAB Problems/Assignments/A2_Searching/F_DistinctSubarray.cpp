#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];

    vector<int> freq(N + 1, 0);

    int distinct = 0;
    int l = 0;
    int maxLen = 0;

    for(int r = 0; r < N; r++) {
        if(freq[A[r]] == 0) distinct++;

        freq[A[r]]++;
        while(distinct > K) {
            freq[A[l]]--;
            if(freq[A[l]] == 0) distinct--;
            l++;
        }
        maxLen = max(maxLen, r - l + 1);
    }

    cout << maxLen << "\n";
}
