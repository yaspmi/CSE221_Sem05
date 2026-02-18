#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n);
int findSqrt_f(int n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCases[] = {0, -16, 1, 10, 36};
    int n = sizeof(testCases) / sizeof(testCases[0]);
    
    for(int i = 0; i < n; i++){
        int x = testCases[i];
        int res = findSqrt(x);
        cout << "The square root of " << x << " is " << res << "\n";
    }

     for(int i = 0; i < n; i++){
        int x = testCases[i];
        int res = findSqrt_f(x);
        cout << "The square root of " << x << " is " << res << "\n";
    }
    
    return 0;
}

//my code
//Time complexity : O(logn)

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

//my friend's code
//Time Complexity O(n)

int findSqrt_f(int n){
    int res=-1;
    for(int i=0; i<=n; i++){
        if(i*i==n) return i;
        else if (i*i<n) res=i;
    }
    return res;
}