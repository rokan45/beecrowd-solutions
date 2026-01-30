#include <bits/stdc++.h>
using namespace std;
int main()
{
   float a, b, c, d, e;
   cin >> a >> b >> c >> d;

   double media = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10.0;
   cout << "Media: " << fixed << setprecision(1) << media << endl;

   if (media >= 7.0)
   {
      cout << "Aluno aprovado." << endl;
   }
   else if (media < 5.0)
   {
      cout << "Aluno reprovado." << endl;
   }
   else
   {
      cout << "Aluno em exame." << endl;
      cin >> e;
      cout << "Nota do exame: " << fixed << setprecision(1) << e << endl;

      double media_final = ((media + e) / 2.0);

      if (media_final >= 5.0)
      {
         cout << "Aluno aprovado." << endl;
      }
      else
      {
         cout << "Aluno reprovado." << endl;
      }
        cout << "Media final: " << fixed << setprecision(1) <<media_final<< endl;
   }

   return 0;
}