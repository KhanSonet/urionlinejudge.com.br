#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    int N, i, sum = 0, X, j;

    cin >> N;

    if ( N>=1 && N<=100)

    for ( i=1 ; i<=N ; i++ )
    {
        cin >> X;

        if  ( X>=1 && X<=pow (10,8))

        {
            for ( j=1 ; j<X ; j++ )
        {
            if ( X%j == 0 )
            {
                sum += j;
            }
        }


       if ( sum == X )  cout << X << " eh perfeito" << endl;
       else if ( sum != X )  cout << X << " nao eh perfeito" << endl;
       sum = 0;
        }

    }

    return 0;
}
