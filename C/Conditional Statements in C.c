#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    
    char* numList[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if (n<=9) {
        printf("%s\n", numList[n]);
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}