#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    string s;
    double a,b;

    cin>>s;

    cin>>a;
    cin>>b;

    printf("TOTAL = R$ %.2lf\n",a+(b*(15/100.0)));

    return 0;
}
