#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int C, j, i;
    char T;
    float M[12][12], sum = 0, avrg = 0;

    cin >> C;

    cin >> T;

    for ( i=0 ; i<12 ; i++ )
    for ( j=0 ; j <12 ; j++ )
    cin >> M [i] [j];


    if ( C>=0 && C <=11 )
    {

           for ( i=0 ; i <12 ; i++ )
            cin >> M [i] [C];


            if ( T == 'S')

           {
                for ( i=0 ; i <12 ; i++ )
            {
                sum += M [i][C];
            }

            printf("%.1f\n",sum);
           }

            else if ( T == 'M' )

            {
                for ( i=0 ; i <12 ; i++ )
            {
                sum += M [i][C];
            }

            avrg = sum / 12 ;

            printf("%.1f\n",avrg);
            }

    }

    return 0;
}
