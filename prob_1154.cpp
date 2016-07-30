#include<cstdio>
#include<iostream>

using namespace std;

int main ( void )
{
    int i,  total = 0 ;
    float c=0;

    cout .precision(2);

    while (  (cin >> i) && i>=0 )
    {
        total = total +i;
        c++;
    }

    cout << fixed << total/c << endl;

    return 0;
}
