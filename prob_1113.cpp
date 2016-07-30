#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int X, Y;

    while ( cin >> X && cin >> Y )
    {
        if ( X==Y )
            break;

        else if ( X>Y )
            cout << "Decrescente" <<endl;

        else if ( X<Y )
            cout << "Crescente" <<endl;
    }

    return 0;
}
