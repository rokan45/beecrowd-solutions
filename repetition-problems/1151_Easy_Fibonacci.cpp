#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n > 0 && n < 46)
    {
        int first = 0, second = 1, next;
        
        if (n == 1)
            cout << first;
        else if (n >= 2)
        {
            cout << first << " " << second;
            
            for (int i = 2; i < n; i++)
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