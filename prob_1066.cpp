#include<cstdio>
#include<iostream>

using namespace std;

int main()

{
    int a[5], i, even = 0, odd = 0, positive = 0, negative = 0;

    for ( i=0 ; i<5 ; i++ )
        cin >> a[i];

     for ( i=0 ; i<5 ; i++ )
     {
         if ( a[i]%2 == 0)
         even ++ ;

         else if ( a[i]%2 != 0)
            odd ++ ;

          if ( a[i]>0 )
            positive ++ ;

          else if ( a[i]<0 )
            negative ++ ;
     }

     cout << even << " valor(es) par(es)" <<endl;
     cout << odd << " valor(es) impar(es)" <<endl;
     cout << positive << " valor(es) positivo(s)" <<endl;
     cout << negative << " valor(es) negativo(s)" <<endl;

     return 0;
}
