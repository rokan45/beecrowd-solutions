#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, n, sum = 0;
    cin >> a >> n;

    // to keep reading on condition n less than or equal zero
    while (n <= 0)
    {
        cin >> n;
    }

    // Iterate and add sum into sum variable
    for (int i = 0; i < n; i++)
    {

        sum = sum + a;
        a++;
    }
    
    cout << sum << endl;
    return 0;
}