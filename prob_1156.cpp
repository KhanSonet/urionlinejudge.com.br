#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float S = 1, i, j = 2;

    for ( i=3 ; i<=39 ; i+=2)
    {
        S += i/j;
        j = j+j;
    }

    printf("%.2f\n",S);

    return 0;
}
