#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int h,km_h;

    cin>>h>>km_h;

    printf("%.3f\n",(float)h*km_h/12);
    return 0;
}
