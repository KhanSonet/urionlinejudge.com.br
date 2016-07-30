#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int a,b,x;

    cin>>a>>b;


    if ( a>b )
    {
        x = 24 - a + b ;
    }

    else if ( b > a )
    {
        x = b - a ;
    }

    else if ( a == b )
    {
        x = 24 ;
    }

    cout << "O JOGO DUROU " << x << " HORA(S)" << endl;

    return 0;
}
