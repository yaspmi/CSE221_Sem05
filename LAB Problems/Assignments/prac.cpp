#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N;
    fin>>N;
    vector<int>A(N);
    for(int i=0; i<N; i++){
        fin>>A[i];
    }
    
    int M;
    fin>>M;
    vector<int>B(M);
    for(int i=0; i<M; i++){
       fin>>B[i];
    }
     
    if(A.empty()||B.empty()) return -1;
    //Now A and B sorted array are ready. Need to merge.

    int i=0, j=0;
    vector<int> C(N+M);
    for(int k=0; k<N+M; k++){
        
       if(A[i]<B[j]){
         C[k]=A[i];
         i++;
       }
       else if(A[i]>B[j]){
        C[k]=B[j];
        j++;
       }
       k++;
    }


    fout<<"\n";

    return 0;
    }