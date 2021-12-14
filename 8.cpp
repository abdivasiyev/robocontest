#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

void solve(int arr[]) {
    long minSum = 0;
    for (int i=0; i<4; i++) {
        minSum += arr[i];
    }
    long maxSum = 0;
    for (int i=4; i>=1; i--) {
        maxSum += arr[i];
    }
    
    printf("%ld %ld", minSum, maxSum);
}

int main()
{
    int arr[5];
    for (int i=0; i<5; i++) cin >> arr[i];
    
    sort(arr, arr+5);
    
    solve(arr);

    return 0;
}