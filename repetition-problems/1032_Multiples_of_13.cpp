/* Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = 0;
    int small=min(x,y);
    int big=max(x,y);

    for (int i = small; i <= big; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}