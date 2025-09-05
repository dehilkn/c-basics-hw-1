#include<stdio.h>


void caesarEncrypt(char message, int key);

int main() {
    char message = scanf("Input text: %m");
    int key = 3;

    printf("Before %s\n", &message);
    caesarEncrypt(message, key);
    printf("After: %s\n", message);

    return 0;
}
