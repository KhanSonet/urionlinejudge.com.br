#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int a, i;

    while ( cin >> a )
    {
        for ( i=1 ; i<=a ; i++ )
        {
            cout << i ;

            if ( i != a )
            {
                cout << " ";
            }

            else if ( i == a )
            {
                cout << endl;
            }
        }

        if ( a == 0)
        {
            break;
        }
    }

    return 0;
}
