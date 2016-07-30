#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
    int a[5], i, sum = 0;

    for ( i=0 ; i<5 ; i++ )
        cin >> a[i];

    for ( i=0 ; i<5 ; i++ )
        if ( a[i]%2 == 0 )
        sum ++ ;

    cout << sum << " valores pares" << endl;

    return 0;
}
