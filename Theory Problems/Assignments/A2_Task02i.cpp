#include <iostream>
using namespace std;

int crossStreak(int A[], int low, int mid, int high)
{
    int leftCount = 0;
    int i = mid;

    while(i >= low && A[i] > 0)
    {
        leftCount++;
        i--;
    }

    int rightCount = 0;
    int j = mid + 1;

    while(j <= high && A[j] > 0)
    {
        rightCount++;
        j++;
    }

    return leftCount + rightCount;
}

int maxPositiveStreak(int A[], int low, int high)
{
    if(low == high)
    {
        if(A[low] > 0)
            return 1;
        else
            return 0;
    }

    int mid = (low + high) / 2;

    int left = maxPositiveStreak(A, low, mid);
    int right = maxPositiveStreak(A, mid + 1, high);
    int cross = crossStreak(A, low, mid, high);

    return max(left, max(right, cross));
}

int main()
{
    int A[] = {1, 4, 3, -5, 5, 5, 6, 1, -4};
    int n = 9;

    cout << maxPositiveStreak(A, 0, n - 1);

    return 0;
}