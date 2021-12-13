#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isKabisa(int year)
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

void solve(int year)
{
    int day = 0;
    int month = 0;

    for (int i = 0; i < 12; i++)
    {
        if (day + months[i] <= 255)
        {
            day += months[i];
            if (i == 1 && isKabisa(year))
            {
                day++;
            }
        }
        else
        {
            month = i;
            break;
        }
    }

    if (day < 255)
    {
        month = month >= 12 ? 0 : month + 1;

        day = 255 - day + 1;
    }

    printf("%02d/%02d/%04d", day, month, year);
}

int main()
{
    int year;
    cin >> year;

    solve(year);
    return 0;
}