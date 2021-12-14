#include <iostream>
#include <algorithm>
#include <queue>

#define ll long long

using namespace std;

int main()
{
    int n, k;
    priority_queue<int> q;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> k;
        q.push(k);
    }
    
    q.pop();
    cout << q.top();
    return 0;
}