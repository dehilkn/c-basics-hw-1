//D=sqrt(b^2-4ac)

#include <math.h>
#include<stdio.h>

int main(){

    float a;
    printf("Input a:\n");
    scanf("%f", &a);

    float b;
    printf("Input b:\n");
    scanf("%f", &b);

    float c;
    printf("Input c:\n");
    scanf("%f", &c);

    int result = sqrt(b*b-4*(a*c));

    printf("In D is: %d\n", result);

    return 0;
}
