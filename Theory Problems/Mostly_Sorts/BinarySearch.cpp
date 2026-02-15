#include <iostream>
#include <vector>
using namespace std;


int binarySearch(const vector<int>& arr, int x){
        int left=0;
        int right=arr.size()-1;
        
        while(left<=right){
            int mid = left + (right - left) / 2; //learnt from suggestion  
            if(arr[mid]==x) return mid;
            else if(arr[mid]>x) right=mid-1;
            else left=mid+1;

            mid=(left+right)/2;
        }
        return -1;
    }
 int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <int> arr={3,5,8,9,10,21,45};
    int x=6;
    int result=binarySearch(arr, x);
    cout<<result<<"\n";
    return 0;
 }
