#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        num++;
    }

    for (int i = 0; i <= 5; i++)
    {
        cout << num + (i * 2) << endl;
    }

    return 0;
}