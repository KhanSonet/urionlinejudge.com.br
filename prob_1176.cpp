#include<cstdio>
#include<iostream>
#include <stdint.h>

using namespace std;

int main()
{

    int  T, N, i, j;

    int64_t a[100000];

    cin >> T;

    for ( i=0 ; i<T ; i++ )
    {
       a[0] = 0;
       a[1] = 1;

        cin >> N;


        if ( N>=0 && N <= 60)
        {

            if ( N == 0 )
    {
        cout << "Fib(" << N << ") = " << a[0] << endl;
    }

    else  if ( N == 1 )
    {
        cout << "Fib(" << N << ") = " << a[1] << endl;
    }

    else if ( N>1 )
    {
        for ( j=2 ; j<=N ; j++ )
    {
        a[j] = a[0]+a[1];
        a[0] = a[1];
        a[1] = a[j];
    }

     for ( j=N ; j<N+1 ; j++ )
    cout << "Fib(" << N << ") = " << a[j] << endl;

        a[j] = 0;
    }

    }

    }

    return 0;
}
