// The Problem :  The department wants you to find the maximum consecutive matches
//  with a positive goal difference. Now present your idea to solve the problem 
//  considering you have to use the same approach used earlier with 
//  pseudocode/programmable code/step-by-step logical instructions.
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>A(n);
    for(int i=0; i<n; i++) cin>>A[i];

    int k=0;
    int max_num=0;
    int curr=0;

    while(k<n){
        if(A[k]>=0) curr++;
        else curr=0;

        max_num=max(curr, max_num);
        k++;
    }
    
    cout<<max_num<<"\n";

    return 0;
}