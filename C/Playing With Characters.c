#include <stdio.h>

int main(){

    char ch, st[50], sen[50];

    scanf(" %c", &ch);
    scanf("%s\n", st);
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", st);
    printf("%s\n", sen);

    return 0;
}