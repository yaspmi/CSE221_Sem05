#include <bits/stdc++.h>
using namespace std;

int findFirstOccurence(vector<int>& arr);
vector<int> arrange_numbers(vector<int> arr);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr={ -15, -13 , -3, -4, -5, -6};
    vector<int> res=arrange_numbers(arr);
    for(int i: res){
        cout<<i<<" ";
    }
    cout <<"\n";
    cout<<findFirstOccurence(res)<<"\n";
    return 0;
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

    //bcz of prev block this block won't run at all
    //    else if(arr[right]<0){
    //     swap(arr[left], arr[right]);
    //     right--;
    //    }
    
    }
    return arr;
}

int findFirstOccurence(vector<int>& arr){
    int l=0;
    int h=arr.size()-1;
    int res=-1;

    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]<0) l=mid+1;
        else if (arr[mid]>0){
            res=mid;
            h=mid-1;
        }
    }
    return res;
}