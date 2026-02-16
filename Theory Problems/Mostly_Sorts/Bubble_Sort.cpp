#include <bits/stdc++.h>
using namespace std;

vector<int> bubble_sort(vector<int> arr);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr={-2, 4, 9, 2, 0, -1, 5};
     vector<int> res=bubble_sort(arr);
     for(int x: res){
        cout<<x<<" ";
    }

     return 0;
}
vector<int> bubble_sort(vector<int> arr){
    
    for(int i=0; i<arr.size(); i++){
        bool swapped=false;
        for(int j=0; j<arr.size()-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
    return arr;
}