#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
    double a[6];
    int  i ,sum=0 ;

    for ( i=0 ; i<6 ; i++ )
        cin>>a[i];

    for ( i=0 ; i<6 ; i++ )
        if ( a[i]>0 )
        sum++ ;

    cout << sum << " valores positivos" <<endl;

    return 0;

}
