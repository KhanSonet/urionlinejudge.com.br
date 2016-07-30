#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j;
    char O;
    double M [12][12], sum = 0 , c;

    cin >> O;

    cout.precision(1);

    for ( i=0 ; i<12 ; i++ )
    for ( j=0 ; j<12 ; j++ )

      cin >> M [i][j];

    if ( O == 'S' )
    {
         for ( i=0 ; i<11 ; i++ )
         for ( j=i+1 ; j<11-i ; j++ )

            sum += M [i][j];

         cout << fixed << sum << endl;
    }

    else if ( O == 'M' )
    {
         for ( i=0 ; i<11 ; i++ )
         for ( j=i+1 ; j<11-i ; j++ )

            {
                sum += M [i][j];
                c++;
            }

         cout << fixed << sum/c << endl;
    }

    return 0;
}
