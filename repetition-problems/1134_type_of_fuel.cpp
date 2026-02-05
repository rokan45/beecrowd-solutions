#include <bits/stdc++.h>
using namespace std;
int main()
{

    int code;
    int alcohol = 0, gasolina = 0, disel = 0;

    while (true)
    {
        cin >> code;
       
        if (code == 1)
        {
            alcohol++;
        }
        else if (code == 2)
        {
            gasolina++;
        }
        else if (code == 3)
        {
            disel++;
        }
        else if(code == 4){
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcohol: " << alcohol << endl;
    cout << "Gasolina: " << gasolina<< endl;
    cout << "Diesel: " << disel << endl;

    return 0;
}