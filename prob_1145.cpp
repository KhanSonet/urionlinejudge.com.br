#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int X, Y, i, c;

    cin >> X >> Y;

    if ( X>1 && X<20 && X<Y && Y<100000 )

    for ( i=1 ; i<=Y ; i++ )
    {
        cout << i;

        c ++ ;

        if ( c!= X)

        {
            cout << " ";
        }

        else if ( c == X )
        {
            cout << endl;
            c = 0;
        }

    }

    return 0;
}
