#include <bits/stdc++.h>

using namespace std;

int get_seconds(string s) {
    int res = 0;
    
    for(int i=0; i<s.size(); i++) {
        res = res*10 + (s[i] - '0');
        res %= 86400;
    }
    
    return res;
}

void get_clock(string s) {
    int left_seconds = get_seconds(s);
    int hour = left_seconds / 3600;
    int min = (left_seconds - hour*3600) / 60;
    int seconds = left_seconds - hour*3600 - min*60;
    
    printf("%d:%02d:%02d", hour, min, seconds);
}

int main() {
    string s;
    
    cin >> s;
    
    get_clock(s);
    
    return 0;
}