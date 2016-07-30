#include<cstdio>
#include<iostream>

using namespace std;

int main()

{
    int a, i, sum = 0;

    cin >> a;

    for ( i=a ; i>0 ; i++)
    {
        if ( i%2 != 0 )
        {
            cout << i  << endl;
            sum ++ ;
        }

        if ( sum == 6 )  break;
    }

    return 0;
}
