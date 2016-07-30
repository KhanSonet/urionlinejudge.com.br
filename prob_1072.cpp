#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int N, X[10000], b = 0, c = 0, i ;

    cin >> N;

    for ( i=0 ; i<N ; i++ )
        cin >> X[i];

     for ( i=0 ; i<N ; i++ )

    if ( X[i]>=10 && X[i]<= 20 )
    {
        b++;
    }

    else c++;

    cout << b << " in" << endl;
    cout << c << " out" << endl;

    return 0;

}
