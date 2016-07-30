#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a, b, i, sum = 0;

    cin >> a >> b;

    if ( a>b )

    for ( i=b+1 ; i<a ; i++ )
    {
        if ( i%2 != 0 )
            sum += i;
    }

    else if ( b>a )

        for ( i=a+1 ; i<b ; i++ )
    {
        if ( i%2 != 0 )
            sum += i;
    }

    cout << sum << endl;

        return 0;
}
