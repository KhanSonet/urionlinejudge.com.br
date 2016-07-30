#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T, i, N[1000], j=0;

    cin >> T;

    if ( T>=2 && T<=50 )
    {

    while ( j < 1000 )

        for ( N[i]=0 ; N[i]<T ; N[i]++)
        {
            if ( j == 1000)
            {
                break;
            }

            cout << "N[" << j << "] = " << N[i] << endl;

            j++;


        }
    }

    return 0;
}
