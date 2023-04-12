#include <stdio.h>

int main(){

    char st[50];

    scanf("%[^\n]%*c", st);

    printf("Hello, World!\n");

    printf("%s\n", st);

    return 0;
}