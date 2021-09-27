#include<stdio.h>

int main(void){
    int a,b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("%d\n",a + b);
    printf("%d\n",a - b);
    printf("%d\n",a * b);
    printf("%.2f\n",(double) a/b);
    printf("%d\n",a % b);
}