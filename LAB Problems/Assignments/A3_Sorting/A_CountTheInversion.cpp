#include <bits/stdc++.h>
using namespace std;

long long invCount = 0;
vector<int> merSort(const vector<int>&A, int l, int r);
vector<int> mergeArrays(const vector<int>&a, const vector<int>&b);
int main(){
 int x;
 cin>>x;
 vector<int>A(x);
 
 for(int i=0; i<x; i++) cin>>A[i];
 A=merSort(A, 0, x-1);
 cout<<invCount<<"\n";
 for(auto i : A) cout<<i<<" ";
 cout<<"\n";
 return 0;
}

vector<int> mergeArrays(const vector<int>&a, const vector<int>&b){

    int n=a.size();
    int m=b.size();
    int i=0, j=0,k=0;

    vector<int>c(n+m);

    while(i<n && j<m){
       if(a[i]<=b[j]){
         c[k++]=a[i++];
       }
       else {
         c[k++]=b[j++];
         invCount += (n - i);
       }
    }

    while(i<n) c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];

    return c;

}

vector<int> merSort(const vector<int>&A, int l, int r){
    if(l>=r) return vector<int>{A[l]};
    int mid= (l+r)/2;
    return mergeArrays(merSort(A, l, mid), merSort(A, mid+1, r));      
}