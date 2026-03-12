#include<bits/stdc++.h>
using namespace std;

struct Result {
    int max_streak;      // maximum consecutive positive streak in range
    int leftmost_streak; // length of positive streak starting at left boundary
    int rightmost_streak;// length of positive streak ending at right boundary
};

Result solve(vector<int>& arr, int left, int right) {
    // Base case: single element
    if (left == right) {
        if (arr[left] > 0) {
            return {1, 1, 1};
        } else {
            return {0, 0, 0};
        }
    }
    
    // Divide
    int mid = (left + right) / 2;
    Result L = solve(arr, left, mid);
    Result R = solve(arr, mid + 1, right);
    
    // Combine
    int max_streak = max(L.max_streak, R.max_streak);
    
    // Check if we can connect streaks at the boundary
    // Left's rightmost streak can extend into right's leftmost streak
    // only if arr[mid+1] > 0 (first element of right half is positive)
    if (arr[mid + 1] > 0) {
        max_streak = max(max_streak, L.rightmost_streak + R.leftmost_streak);
    }
    
    // Calculate leftmost_streak for combined range
    int leftmost_streak;
    // If left half is all positive, leftmost extends into right half
    if (L.leftmost_streak == (mid - left + 1)) {
        // All elements in left half are positive
        leftmost_streak = L.leftmost_streak + R.leftmost_streak;
    } else {
        leftmost_streak = L.leftmost_streak;
    }
    
    // Calculate rightmost_streak for combined range
    int rightmost_streak;
    // If right half is all positive, rightmost extends into left half
    if (R.rightmost_streak == (right - mid)) {
        // All elements in right half are positive
        rightmost_streak = L.rightmost_streak + R.rightmost_streak;
    } else {
        rightmost_streak = R.rightmost_streak;
    }
    
    return {max_streak, leftmost_streak, rightmost_streak};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    if (n <= 0) {
        cout << 0 << "\n";
        return 0;
    }
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Result answer = solve(arr, 0, n - 1);
    cout << answer.max_streak << "\n";
    
    return 0;
}
