#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> num;

        if (num > 0)
        {
            count1++;
        }
        if (num < 0)
        {
            count2++;
        }
        if (num % 2 == 0 || num == 0)
        {
            count3++;
        }
        if (num % 2 != 0)
        {
            count4++;
        }
    }

    cout << count3 << " valor(es) par(es)" << endl;
    cout << count4 << " valor(es) impar(es)" << endl;
    cout << count1 << " valor(es) positivo(s)" << endl;
    cout << count2 << " valor(es) negativo(s)" << endl;

    return 0;
}