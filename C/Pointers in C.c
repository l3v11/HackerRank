#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int atmp = *a;
    *a = atmp + *b;
    *b = abs(atmp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}