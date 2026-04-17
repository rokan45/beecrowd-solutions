#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    if (1<n || n<1000)//If we use while loop here,it can affected the run time much longer than "if" loop or run time error happend
    {
        cin >> n;

        for (int i = 1; i < 11; i++)
    {
        int result = i * n;
        cout << i << " x " << n << " = " << result << endl;
    }

    }
    

    
    return 0;
}