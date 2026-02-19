#include <bits/stdc++.h>
using namespace std;

int find_min_Element(vector<int> arr);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr={ 4 ,5 ,6,-1, 0 ,1 ,2 ,3};
    //  
    //1 2 3 4 0
    // 4 0 1 2 3
    int x=find_min_Element(arr);
    cout<<"MINIMUM NUMBER IS : "<< x <<"\n";

return 0;
}

int find_min_Element(vector<int> arr){
    int l=0;
    int h=arr.size()-1;
    if(arr.empty()) return -1;

    while(l<=h){
       int mid=l+(h-l)/2;

    if(arr[l]>arr[h]){

        if(arr[mid]<arr[h]) h=mid;
        else if(arr[mid]>arr[h]) l=mid+1;
        else if(arr[mid]==arr[l] || arr[mid]==arr[h]) return arr[mid];
    }
    else if (l==h) return arr[l];
    else return arr[l];
    }

    return -1;
}