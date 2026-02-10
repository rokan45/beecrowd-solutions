#include <bits/stdc++.h>
using namespace std;
int main()
{
    // As we are going to take double number so we have to declare array double
    double arr[6];

    // We have to take a variable which is going to count the positive number
    int positiveCounter = 0;

    // Take numbr input in the array
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        // Check the number if it positive or not
        if (arr[i] > 0)
        {
            // In every checking positive number the variable will increment the number
            positiveCounter++;
        }
    }

    cout << positiveCounter << " valores positivos" << endl;

    return 0;
}
