//E

#include <math.h>
#include<stdio.h>

int main(){

    float a;
    a = 3;
    float b;
    b = 4.5;
    float c;
    c = 16;
    float d;
    d = 2.7;
    float e;
    e = 5;
    float f;
    f = 25.2;
    float g;
    g = 2.4;
    float h;
    h = 6;


    int result = ((log(sqrt(a*a+b*b))+sqrt(c*d)) / e*sqrt(f))-log(g+h);

    printf("y = %d\n", result );

    return 0;
}
