#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int N, i, fact = 1;

    cin >> N;

    if ( N>0 && N<13)

    for ( i=N ; i>0 ; i-- )

    {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}
