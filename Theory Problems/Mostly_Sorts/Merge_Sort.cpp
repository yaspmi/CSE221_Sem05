#include <bits/stdc++.h>
using namespace std;

vector<int> merge_two_arr(vector<int>&a, vector<int>&b);
vector<int> merge_sort(vector<int>&A, int l, int r);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;

    vector<int>A(x);
    for(int i=0; i<x; i++){
        cin>>A[i];
    }
    A=merge_sort(A,0,x-1);
    for(auto i: A) cout<<i<<" ";
    cout<<"\n";
return 0;
}

vector<int> merge_two_arr(vector<int>&a, vector<int>&b){
    int n=a.size();
    int m=b.size();

    int i=0, j=0, k=0;
    vector<int>c(n+m);

    while(i<n && j<m){
        if(a[i]<=b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }

    while(i<n) c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];

    return c;
}

vector<int> merge_sort(vector<int>&A, int l, int r){
    if(l>=r) return vector<int>{A[l]};
    
    int mid=(l+r)/2;
    return merge_two_arr(merge_sort(A,l, mid), merge_sort(A, mid+1, r));
    
}