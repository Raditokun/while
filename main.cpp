#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "masukkan bilanganmu: ";
   cin >> n;

   if (n<2)
   {
      cout << n << " adalah bukan bilangan prima";
      return 0;
   }

   int i=2;
   do   {

      if (n%i==0)
      {
         cout << n << " adalah bukan bilangan prima";
         return 0;
      }
      i++;
   }while (i<=n/2);
   cout << n << " adalah  bilangan prima";
   return 0;
}