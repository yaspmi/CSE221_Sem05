#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    long long x;

    fin>>n>>x;
    
    using pii=pair<int, int>;

    vector<pii> A(n);

    for(int i=0; i<n; i++){
        fin>>A[i].first;
        A[i].second=i;
    }
    sort(A.begin(), A.end());


    for(int k=0; k<n-2; k++){
        int i=k+1;
        int j=n-1;
        while(i<j){
          long long sum=A[k].first+A[i].first+A[j].first;
          if(sum<x) i++;
          else if(sum>x) j--;
          else if(sum==x) {
            fout << A[k].second+1<<" "<<A[i].second+1<<" "<<A[j].second+1<<"\n";
            return 0;
          }
        }
    }
    fout<<-1<<"\n";
    return 0;
}