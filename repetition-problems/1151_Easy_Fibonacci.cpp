#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n > 0 && n < 46)
    {
        int first = 0, second = 1, next;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cout << first;
            }
            else if (i == 1)
            {
                cout << " " << second;
            }
            else
            {
                next = first + second;

                cout << " " << next;
                first = second;
                second = next;
            }
        }
    }

    return 0;
}