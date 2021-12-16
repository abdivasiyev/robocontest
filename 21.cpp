#include <bits/stdc++.h>

using namespace std;

int main() {
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  
  int s = 0;
  if (n1&1) s+=(n1+1)/2; else s+=n1/2;
  if (n2&1) s+=(n2+1)/2; else s+=n2/2;
  if (n3&1) s+=(n3+1)/2; else s+=n3/2;
  
  cout << s;
  
  return 0;
}