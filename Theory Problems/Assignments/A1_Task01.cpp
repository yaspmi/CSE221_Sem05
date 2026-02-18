#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x=36;
    int res=findSqrt(x);
    cout<<"The square root of "<<x<<" is "<<res<<"\n";
    return 0;
}

int findSqrt(int n){

    if(n<0) return -1;
    if(n==0) return 0;
    
    int l=0;
    int h=n;
    int result=-1; 
    
    while (l<=h){
        int m=l+(h-l)/2;
        if(m*m==n) return m;
        else if (m*m>n) h=m-1;
        else {
            result=m;
            l=m+1;
        }
    }
    return result;
}