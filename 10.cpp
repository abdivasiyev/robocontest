#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    
    if(a+b+c >= n) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}