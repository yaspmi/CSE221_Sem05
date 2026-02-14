#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    long long sum = 0;
    int longest_count=0;
    int j=0;
    for(int i=0; i<N && j<N; i++){
            sum += A[i];
            while (sum>K&&j<=i){
                sum -= A[j];
                j++;
            }
            longest_count = max(longest_count,i-j+1);
    }
    cout << longest_count << "\n";
}