#include <iostream>
#include <algorithm>

using namespace std;

string solve(string a, string b)
{
    string res = "";
    int i = 0, j = 0, ai = 0, bj = 0, reminder = 0, k;

    while (i < a.size() || j < b.size())
    {
        ai = i < a.size() ? a[i] - '0' : 0;
        bj = j < b.size() ? b[j] - '0' : 0;

        k = ai + bj + reminder;

        res += k % 10 + '0';
        reminder = k / 10;

        i++;
        j++;
    }

    if (reminder > 0)
    {
        res += reminder + '0';
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    cout << solve(a, b) << endl;

    return 0;
}