#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, count = 0;
    int position = 0;

    for (int i = 0; i <=100; i++)
    {
        cin >> x;

        if (x > count)
        {
            count = x;
            position = i;
        }
    }
    cout <<count << endl;
    cout<<position<<endl;

    return 0;
}