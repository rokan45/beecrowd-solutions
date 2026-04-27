#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int j = 65;

    for (i = 1; i <= 37; i += 3)
    {
        j -= 5;
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}