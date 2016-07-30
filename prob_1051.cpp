#include<iostream>
#include<cstdio>

using namespace std;

int main ( void )
{
    float a, m, n, o;

    cin >> a;

    cout.precision(2);

    if ( a>=0 && a<=2000 )
    {
        cout << "Isento" << endl;
    }

    else if ( a>=0 && a<=3000 )
    {
        m = (a-2000) * 0.08;
        cout << fixed << "R$ " << m << endl;
    }

    else if ( a>= 0 && a<= 4500 )
    {
        m = (a-3000)*0.18;
        n = 1000 * 0.08;
        cout << fixed << "R$ " << m+n << endl;
    }

    else if ( a>= 0 && a> 4500 )
    {
        m = 1500 * 0.18;
        n = 1000 * 0.08;
        o = (a - 4500) * 0.28;

        cout << fixed << "R$ " << m+n+o << endl;
    }

    return 0;
}
