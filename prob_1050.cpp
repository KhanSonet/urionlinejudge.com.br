#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
    int DDD;
    string m;

    cin>>DDD;

    switch ( DDD )

    {
        case 61 : m = "Brasilia";
                 break;

        case 71 : m = "Salvador";
                 break;

        case 11 : m = "Sao Paulo";
                 break;

        case 21 : m = "Rio de Janeiro";
                 break;

        case 32 : m = "Juiz de Fora";
                 break;

        case 19 : m = "Campinas";
                 break;

        case 27 : m = "Vitoria";
                 break;

        case 31 : m = "Belo Horizonte";
                 break;

        default : m="DDD nao cadastrado" ;
    }

    cout<<m<<endl;

    return 0;

}
