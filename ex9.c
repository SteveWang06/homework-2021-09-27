#include<stdio.h>

int main(void){
    int a;
    scanf("%d", &a);
    int a1 = ((a/1000) + 7) % 10;
    int a2 = ((a/100) + 7) % 10;
    int a3 = ((a/10) + 7) % 10;
    int a4 = (a + 7) % 10;
    printf("%d%d%d%d\n", a3, a4, a1, a2);
    
}