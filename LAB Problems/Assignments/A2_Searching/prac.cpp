#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N;
    int M;
    int K;
    fin>>N>>M>>K;

    vector<int>A;
    vector<int>B;

    for(int i=0;i<N;i++){
        int a;
        fin>>a;
        A.push_back(a);
    }
     for(int i=0;i<M;i++){
        int a;
        fin>>a;
        B.push_back(a);
    }

    int best_i;
    int best_j;
    int best_diff=INT_MAX;
    int i=0;
    int j=M-1;
    int x=1;

    while(i<N && j>=0){
    fout<<"iteration : "<<x<<"\n";
    x++;
       long long sum=A[i]+B[j];
       long long current_diff=abs(sum-K);

       if(current_diff<best_diff) {
        best_diff=current_diff;
        best_i=i;
        best_j=j;
        fout<<best_i+1<<" "<<best_j+1<<"\n";
       }

       if(sum>K) j--;

       else if(sum<K) i++;

       else if(sum==K){
        fout << i+1<<" ___this part ran___ "<<j+1<<"\n";
        return 0;
       }

    }
    fout<<best_i+1<<"____"<<best_j+1<<"\n";
    fin.close();
    fout.close();
    return 0;
}