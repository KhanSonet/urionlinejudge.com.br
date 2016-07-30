#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int i, j, c = 0;
    char O;
    float M [12][12], sum = 0;

    cin >> O;

    for ( i=0 ; i<12 ; i++ )
    for ( j=0 ; j<12 ; j++ )

    cin >> M [i] [j];


        if ( O=='S' )
        {
         for ( i=0 ; i<12 ; i++ )
         for ( j=i+1 ; j<12 ; j++ )
            {
            sum += M[i] [j];
            }
            printf ("%.1f\n",sum);

        }

        else if ( O=='M' )
        {
            for ( i=0 ; i<12 ; i++ )
            for ( j=i+1 ; j<12 ; j++ )
            {
            sum += M[i] [j];
            c++;
            }

        printf ("%.1f\n",sum/c);
        }

    return 0;

}
