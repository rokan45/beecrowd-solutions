// This is the beecrowed 1099 Problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;

    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> x >> y;

        if (x > y)
        {
            swap(x, y);
        }

        int sum = 0;
        for (int k = x + 1; k < y; k++)
        {

            if (k % 2 != 0)
            {

                sum += k;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}