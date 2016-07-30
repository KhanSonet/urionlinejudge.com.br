#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int L, j, i;
    char T;
    float M[12][12], sum = 0, avrg = 0;

    cin >> L;

    cin >> T;

    for ( i=0 ; i<12 ; i++ )
    for ( j=0 ; j <12 ; j++ )
    cin >> M [i] [j];


    if ( L>=0 && L <=11 )
    {

            if ( T == 'S')

           {
                for ( j=0 ; j <12 ; j++ )
            {
                sum += M [L][j];
            }

            printf("%.1f\n",sum);
           }

            else if ( T == 'M' )

            {
                for ( j=0 ; j <12 ; j++ )
            {
                sum += M [L][j];
            }

            avrg = sum / 12 ;

            printf("%.1f\n",avrg);
            }

    }

    return 0;
}
