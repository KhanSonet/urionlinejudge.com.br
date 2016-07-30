#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N, X, Y, i;

    cin >> N;

    for ( i=0 ; i<N ; i++ )
    {
        cin >> X >> Y;

        if ( Y==0 )
            printf("divisao impossivel\n");

        else
            printf("%.1f\n",(float) X/Y );
    }

    return 0;
}
