#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;

    for (i = 1; i <= 9; i += 2)
    {
        int j = 7 + (i - 1);

        for (int k = 1; k <= 3; k++)
        {

            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
    }

    return 0;
}