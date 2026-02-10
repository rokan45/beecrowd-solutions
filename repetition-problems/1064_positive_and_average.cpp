#include <bits/stdc++.h>
using namespace std;
int main()
{
    double num, sum = 0, result;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> num;

        if (num > 0)
        {
            count++;
            sum += num;
            result = sum /count;
        }
    }

    cout << count << " valores positivos" << endl;
    cout << fixed<<setprecision(1)<<result << endl;

    return 0;
}