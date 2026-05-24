#include <bits/stdc++.h>
using namespace std;
int main()
{
    float i;

    for (i = 0.0; i <= 2.2; i += 0.2)
    {
        float j = 1 + i;
        for (int k = 1; k <= 3; k++)
        {
            cout << "I=" << i << " J=" << j << endl;
            j++;
        }
    }

    return 0;
}