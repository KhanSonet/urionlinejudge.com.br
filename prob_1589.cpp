#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T, i, R1, R2;

    long int S;

    cin >> T;

    if ( T<=10000 )
        for ( i=0 ; i<T ; i++ )
    {
        cin >> R1 >> R2;

        if ( R1>0 && R2>0 )

            S = R1+R2;

        cout << S << endl;

    }

    return 0;
}
