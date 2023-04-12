#include <stdio.h>

int max_of_four(int a, int b, int c, int d){

    if(a>b && a>c && a>d){
        return a;
    } else if(b>c && b>d){
        return b;
    } else if(c>d){
        return c;
    } else{
        return d;
    }
}

int main(){

    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int max_num = max_of_four(a, b, c, d);

    printf("%d\n", max_num);

    return 0;
}