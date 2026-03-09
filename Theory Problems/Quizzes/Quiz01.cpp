//The problem was something like : The given array's elements are strictly
//decreasing then strictly increasing. 
//need to find the minimum element.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    
    if(x==0) return -1;
    vector<int>A(x);
    for(int i=0; i<x; i++){
        cin>>A[i];
    }
    
    int l=0, r=x-1;
    while(l<r){
        int mid=(l+r)/2;
        if(A[mid]>A[mid+1]) l=mid+1;
        else r=mid;
    }
    cout<<A[l];
    return 0;
}