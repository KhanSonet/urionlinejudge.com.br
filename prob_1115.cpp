#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a, b;

    while ( cin >> a && cin >> b )
    {
            if ( a>0 && b>0 )
            cout << "primeiro" << endl;

            else if ( a>0 && b<0 )
            cout << "quarto" << endl;

            else if ( a<0 && b<0 )
            cout << "terceiro" << endl;

            else if ( a<0 && b>0 )
            cout << "segundo" << endl;

            else if ( a==0 || b==0 )
                break;
    }

    return 0;
}
