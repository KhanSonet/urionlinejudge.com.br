#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float i, S = 0;

    for ( i=1 ; i<=100 ; i++ )
    {
        S += 1/i;
    }

    printf ( "%.2f\n",S);

    return 0;
}
