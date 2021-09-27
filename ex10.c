#include<stdio.h>

int main(void){
    int a,b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if (a > 1000 && b > 1000) {
        printf("a and b <1000");
    }
    else{
        printf("%d + %d = %d\n",a,b,a+b);
        printf("%d - %d = %d\n",a,b,a-b);
        printf("%d * %d = %d\n",a,b,a*b);
        printf("%d / %d = %f\n",a,b,(float)a/b);
    }
}