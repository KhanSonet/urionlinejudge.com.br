#include<cstdio>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int N, i;

    cin >> N ;

    if ( N>=0 && N<= pow (10,6) )

    for ( i=1 ; i<=N ; i++ )
    {
        if ( i<N )
        {
           cout << "Ho " ;
        }

        else if ( i==N )
        {
            cout << "Ho!" << endl;
        }


    }

    return 0;
}
