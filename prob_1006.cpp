#include <cstdio>
#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    scanf("%f %f %f", &x, &y, &z);
    printf("MEDIA = %.1f\n", (x*2+y*3+z*5)/(2+3+5));
    return 0;
}
