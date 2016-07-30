#include<iostream>
#include<cstdio>

using namespace std;

int main ( void )
{
    int i, j;
    char O;
    float M[12][12], c, sum1 = 0, sum2 = 0, c1, c2;

    cin >> O;
    cout .precision(1);

    for ( i=0 ; i<12 ; i++ )
        for ( j=0 ; j<12 ; j++ )
            cin >> M[i][j];


        for ( i=1 ; i<6 ; i++ )
            for ( j=12-i ; j<12 ; j++ )

                {
                    sum1 = sum1+M[i][j];
                    c1++;
                }



         for ( i=6 ; i<11 ; i++ )
            for ( j=i+1 ; j<12 ; j++ )

            {
                sum2 = sum2+M[i][j];
                c2++;
            }

         if ( O == 'S' )
        cout << fixed << sum1+sum2 << endl;

        else if ( O == 'M')
        cout << fixed << (sum1+sum2)/(c1+c2) << endl;



    return 0;
}
