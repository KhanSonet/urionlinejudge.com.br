#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
    int X, i;

    cin >> X;

    if ( X>=1 && X <= 1000)
    {
        for ( i=0 ; i<=X ; i++)
            if ( i%2 != 0 )
           {
                cout << i << endl;
           }
    }

    return 0;
}
