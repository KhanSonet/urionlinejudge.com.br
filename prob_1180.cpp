#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int N, X[1000], min = X[0] , i, m;

    cin >> N ;

    if ( N>1 && N<1000 )

    for ( i=0 ; i<N ; i++ )
        cin >> X[i];

      for ( i=0 ; i<N ; i++ )
       {
            if ( min > X[i] )

      {
          min = X[i];
          m=i;
      }

       }

      cout << "Menor valor: " << min << endl;
      cout << "Posicao: " << m << endl;

      return 0;
}
