#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double X;
    double  N[100];
    int i;

    cin >> X;

     N[0] = X;

    for ( i=0 ; i<100 ; i++ )
    {
        printf("N[%d] = %.4f\n",i,(double)N[i]);
        N[i+1] = N[i] / 2;
    }

    return 0;
}
