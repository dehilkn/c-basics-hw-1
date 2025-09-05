//from C to F
#include<stdio.h>

int main(){

    float a;
    printf("Input °C:\n");
    scanf("%f", &a);
    int result = (a*1.8)+32;


    printf("In °F it`s: %d\n", result);

    return 0;
}
