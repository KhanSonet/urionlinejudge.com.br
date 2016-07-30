#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float a[6], avg = 0 ;

    int i, sum = 0 ;

    for ( i = 0 ; i < 6 ; i++ )
        cin >> a[i] ;


    for ( i = 0 ; i < 6 ; i++ )
    if ( a[i] > 0 )
   {

        avg += a[i] ;
        sum ++ ;
   }

    cout << sum <<" valores positivos" << endl;
    cout << avg / sum << endl;

    return 0;

}
