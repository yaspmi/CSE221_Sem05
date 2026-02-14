#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    
    using pii=pair<long long, int>;
    vector<pii> A(n);
    for (int i = 0; i < n; i++){
        long long a;
        cin >> a;
        A[i] = {a, i+1};
    }

    sort(A.begin(), A.end());
    
    for (int k = 0; k<n-2; k++){
        int i = k + 1, j = n - 1;
        while (i<j){
            long long sum = A[i].first + A[j].first + A[k].first;
            if (sum == x){
                cout<<A[i].second<<" "<<A[j].second<<" "<<A[k].second<<"\n";
                return 0;
            }
            else if (sum < x) i++;
            else j--;
        }
    }
    cout<<-1<<"\n";
}