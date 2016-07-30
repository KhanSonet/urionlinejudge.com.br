#include<cstdio>
#include<iostream>

using namespace std;

int main()

{
    int N, i, j;
    float X[3], avrg = 0;

    cin >> N;

    for ( j=0 ; j<N ; j++ )
       {
          for ( i=0 ; i<3 ; i++)

           cin >> X[i];

         avrg = ( (X[0] * 2) + (X[1] * 3) + (X[2] *5) ) / 10;

         printf( "%.1f\n", avrg);
       }


       return 0;

}
