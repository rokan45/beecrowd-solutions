#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;

    for (i = 1; i <= 9; i += 2)
    {
        int j = 7;
        for (int k = 1; k <= 3; k++)
        {

            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
    }

    // Another version of loop solution for this problem

    for (i = 1; i <= 9; i += 2)
    {
        for (int j = 7; j >= 5; j--)
        {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
