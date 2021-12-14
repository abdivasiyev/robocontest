#include <iostream>
#include <vector>
#include <map>

#define ll long long

using namespace std;

map<int, ll> cache;

ll fib(int n) {
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }
    
    ll res = fib(n-1)+fib(n-2);
    cache[n] = res;
    return res;
}

int main()
{
    int n;
    cin >> n;
    
    cache[1] = 2;
    cache[2] = 2;

    cout << fib(n);
    return 0;
}