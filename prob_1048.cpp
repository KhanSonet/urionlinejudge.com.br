#include <iostream>
#include <cstdio>

using namespace std;

int main()

{
    float a;

    cin>>a;

    if ( a>=0 && a<=400)
    {
        printf( "Novo salario: %.2f\n", a*.15 + a  );
        printf( "Reajuste ganho: %.2f\n", a*.15);
        printf( "Em percentual: 15 %%\n" );
    }

    else if ( a>400 && a<=800)
    {
        printf( "Novo salario: %.2f\n", a*.12 +a );
        printf( "Reajuste ganho: %.2f\n", a*.12 );
        printf( "Em percentual: 12 %%\n" );
    }

    else if ( a>800 && a<=1200)
    {
        printf( "Novo salario: %.2f\n", a*.1 + a );
        printf( "Reajuste ganho: %.2f\n", a*.1 );
        printf( "Em percentual: 10 %%\n" );
    }

    else if ( a>1200 && a<=2000)
    {
        printf( "Novo salario: %.2f\n", a*.07 + a );
        printf( "Reajuste ganho: %.2f\n", a*.07 );
        printf( "Em percentual: 7 %%\n" );
    }

    else if ( a>2000 )
    {
        printf( "Novo salario: %.2f\n", a*.04 + a );
        printf( "Reajuste ganho: %.2f\n", a*.04 );
        printf( "Em percentual: 4 %%\n" );
    }

    return 0;
