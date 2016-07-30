#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N, i, X, Y, sum = 0, c, j;

    cin >> N;

    for ( i=0 ; i<N ; i++ )
    {
        cin >> X >> Y;

        if ( X%2 == 0 )
        {
             for ( j=X+1 ; j>=X ; j += 2 )
        {
                    sum += j;
                    c++;


               if ( c == Y )
               {
                   break;
               }
        }

               cout << sum << endl;
               sum = 0;
               c=0;
    }


    else if ( X%2 != 0 )
        {
             for ( j=X ; j>=X ; j += 2 )
        {
                    sum += j;
                    c++;


               if ( c == Y )
               {
                   break;
               }
        }

               cout << sum << endl;
               sum = 0;
               c=0;
    }


        }

    return 0;
}
