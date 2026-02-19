#include <bits/stdc++.h>
using namespace std;

vector<int> arrange_numbers(vector<int> arr);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr={ -15, -13 , -3, -4, -5, -6};
    vector<int> res=arrange_numbers(arr);
    for(int i: res){
        cout<<i<<" ";
    }
}

vector<int> arrange_numbers(vector<int> arr){
    int left=0;
    int right=arr.size()-1;

    while(left<=right){

       if ( arr[left] < 0 ) left++;

       else if( arr[right] > 0) right--;

       else if( arr[left] > 0) {
        swap(arr[left], arr[right]);
        left++;
       }

       else if(arr[right]<0){
        swap(arr[left], arr[right]);
        right--;
       }
    }
    return arr;
}