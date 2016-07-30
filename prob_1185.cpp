#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j ;
    char O;
    float M [12][12], sum = 0, c;

    cin >> O;

    for ( i=0 ; i<12 ; i++ )
        for ( j=0 ; j<12 ; j++ )
        cin >> M [i][j];

    if ( O == 'S' )
    {
        for ( i=0 ; i<11 ; i++ )
        for ( j=0 ; j<11-i ; j++ )
            sum += M [i] [j];

        printf("%.1f\n",sum);
    }

     else if ( O == 'M' )
    {
        for ( i=0 ; i<11 ; i++ )
        for ( j=0 ; j<11-i ; j++ )
            {
                sum += M [i] [j];
                c++;
            }

        printf("%.1f\n",sum/c);
    }

    return 0;
}
