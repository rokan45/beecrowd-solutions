#include <bits/stdc++.h>
using namespace std;
int main()
{

    int number, sum = 0, count = 0;

    while (cin >> number && number >= 0)
    {

        count++;
        sum += number;
    }

    if (count > 0)
    {
        double average = (double)sum / count;
        cout << fixed << setprecision(2) << average << endl;
    }


    return 0;
}