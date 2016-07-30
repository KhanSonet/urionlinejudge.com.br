#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j;
    char O;
    float M [12][12], c, sum = 0;

    cin >> O;

    for ( i=0 ; i<12 ; i++ )
    for ( j=0 ; j<12 ; j++ )

        cin >> M [i][j];

    if ( O == 'S' )
    {
        for ( i=1 ; i<12 ; i++ )
        for ( j=12-i ; j<12 ; j++ )
            sum += M [i][j];

        printf("%.1f\n",sum);
    }


    else if ( O == 'M' )

    {
        for ( i=0 ; i<12 ; i++ )
        for ( j=12-i ; j<12 ; j++ )
            {
                sum += M [i][j];
                c++;
            }

        printf("%.1f\n",sum/c);

    }

    return 0;

}
