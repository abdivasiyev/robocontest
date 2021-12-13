#include <iostream>
#include <algorithm>

using namespace std;

int solve(int z)
{
    if (z == -1)
        return 1;
    if (z == 0)
        return -1;
    if (z == 1)
        return 0;

    int count = 0;

    for (int i = 1; i * i <= abs(z); i++)
    {
        if (abs(z) % i == 0 && abs(z) / i >= i)
        {
            if (i * i == abs(z) && z < 0)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }

    return count;
}

int main()
{
    int z;
    cin >> z;

    cout << solve(z);

    return 0;
}