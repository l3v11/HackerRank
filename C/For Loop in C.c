#include <stdio.h>

int main() 
{
    int a, b, i;
    char* numList[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    scanf("%d\n%d", &a, &b);

    for (i=a; i<=b; i++) {
        if (i>= 1 && i<=9) {
            printf("%s\n", numList[i-1]);
        } else if (i % 2 == 0) {
            printf("even\n");
        } else if (i % 2 != 0) {
            printf("odd\n");
        }
    }

    return 0;
}