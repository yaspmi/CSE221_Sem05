#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    long long K;
    cin >> N >> M >> K;

    vector<long long> A(N);

    vector<long long> B(M);

    for (int i = 0; i < N; i++){
        long long a;
        cin >> a;
        A[i] = a;
    }
    for (int i = 0; i < M; i++){
        long long b;
        cin >> b;
        B[i] = b;
    }
    
    int i = 0, j = M - 1;
    long long closest_diff = LLONG_MAX;
    int closest_i = 0, closest_j = 0;
    while (i < N && j >= 0){
        long long sum = A[i] + B[j];
        long long diff = llabs(sum - K);
        if (diff < closest_diff){
            closest_diff = diff;
            closest_i = i;
            closest_j = j;
        }

        if (sum > K){
            j--;
        } else if (sum < K){
            i++;
        } else {
            break;
        }
    }

    cout << closest_i + 1 << " " << closest_j + 1 << "\n";
    return 0;

}