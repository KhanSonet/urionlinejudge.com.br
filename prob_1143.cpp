#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N, i, j;

    cin >> N;

    if ( N >1 && N<1000 )

    for ( i=1 ; i<=N ; i++ )
    {
        for ( j=1 ; j<2 ; j++)
        {
            cout << i << " ";
        }

        for ( j=1 ; j<2 ; j++)
        {
            cout << i*i << " ";
        }

        for ( j=1 ; j<2 ; j++)
        {
            cout << i*i*i << endl;
        }

    }

    return 0;
}
