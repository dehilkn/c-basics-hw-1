#include<stdio.h>


char csr(char ch, int key) {
    if (ch >= 'a' && ch <= 'z') {
        return (ch - 'a' + key) % 26 + 'a';
    } else if (ch >= 'A' && ch <= 'Z') {
        return (ch - 'A' + key) % 26 + 'A';
    } else {
        return ch;
    }

}

int main()
{
    char a,b,c;
    printf("Input 1st letter:\n");
    scanf("%s", &a);
    printf("Input 2nd letter:\n");
    scanf("%s", &b);
    printf("Input 3rd letter:\n");
    scanf("%s", &c);

    int key;
    printf("Key:\n");
    scanf("%d", &key);


    a = csr(a, key);
    b = csr(b, key);
    c = csr(c, key);


    printf("%c %c %c %c\n", a, b, c, key);

}


