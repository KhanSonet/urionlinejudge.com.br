#include<iostream>
#include<cstdio>

using namespace std;

int main ( void )
{
    float N, c, M;
    int x;

    cin >> N;

    cout << "NOTAS:" << endl;

    x = N/100;

    cout << x  << " nota(s) de R$ 100.00" << endl;

     c = N - x*100 ;
     M = N - x*100;
     x = c/50;
     cout << x  << " nota(s) de R$ 50.00" << endl;

     c = M - x*50 ;
     M = M - x*50;
     x = c/20;
     cout << x  << " nota(s) de R$ 20.00" << endl;

     c = M - x*20 ;
     M = M - x*20;
     x = c/10;
     cout << x  << " nota(s) de R$ 10.00" << endl;

     c = M - x*10 ;
     M = M - x*10;
     x = c/5;
     cout << x  << " nota(s) de R$ 5.00" << endl;

     c = M - x*5 ;
     M = M - x*5;
     x = c/2;
     cout << x  << " nota(s) de R$ 2.00" << endl;

     cout << "MOEDAS:" << endl;

     c = M - x*2 ;
     M = M - x*2;
     x = c/1;
     cout << x  << " moeda(s) de R$ 1.00" << endl;

     c = M - x*1 ;
     M = M - x*1;
     x = c/0.50;
     cout << x  << " moeda(s) de R$ 0.50" << endl;

     c = M - x*0.50 ;
     M = M - x*0.50;
     x = c/0.25;
     cout << x  << " moeda(s) de R$ 0.25" << endl;

     c = M - x*0.25 ;
     M = M - x*0.25;
     x = c/0.10;
     cout << x  << " moeda(s) de R$ 0.10" << endl;

     c = M - x*0.10 ;
     M = M - x*0.10;
     x = c/0.05;
     cout << x  << " moeda(s) de R$ 0.05" << endl;

     cout . precision(2);
     c = M - x*0.05 ;
     M = M - x*0.05;
     cout << c/0.01  << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
