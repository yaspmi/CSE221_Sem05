#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N ;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    cin >> M;
    vector<long long> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    vector<long long> C;
    int i=0, j=0;

    for (; i < N && j < M; ){
        if (A[i] < B[j]){
            C.push_back(A[i]);
            i++;
        } else {
            C.push_back(B[j]);
            j++;
        }
    }
    while (i < N){
        C.push_back(A[i]);
        i++;
    }
    while (j < M){
        C.push_back(B[j]);
        j++;
    }
    for (long long x : C) cout << x << " ";
}