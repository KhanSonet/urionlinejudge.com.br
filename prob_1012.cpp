#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double A,B,C,p,pi=3.14159,triangle,circle,trapezium,square,rectangle;
    while(scanf("%lf %lf %lf",&A,&B,&C)==3){
    triangle=A*C/2;
    circle=pi*C*C;
    p=A+B;
    trapezium=.5*p*C;
    square=(B*B);
    rectangle=A*B;
  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapezium,square,rectangle);
}
}
