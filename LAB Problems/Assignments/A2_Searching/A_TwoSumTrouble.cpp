
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long S;
    cin >> N >> S;

    vector<long long> A;
    A.reserve(N);
    for (int i = 0; i < N; i++){
        long long a;
        cin >> a;
        A.push_back(a);
    }
    int l = 0, r = N - 1;
    while (l < r){
        long long sum = A[l] + A[r];
        if(sum>S) r--;
        else if (sum<S) l++;
        else if (sum == S){
            cout << l + 1 << " " << r + 1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}