#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int i;

   while ( cin >> i )
   {
       if ( i!= 2002 )
       {
           cout << "Senha Invalida" << endl;
       }

       else if ( i == 2002 )
       {
           cout << "Acesso Permitido" << endl;
           break;
       }
   }

    return 0;
}
