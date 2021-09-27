#include<stdio.h>

int main(void){
    int chinese,english,math;
    printf("chinese = ");
    scanf("%d", &chinese);
    printf("english = ");
    scanf("%d", &english);
    printf("math = ");
    scanf("%d", &math);
    int sum =  chinese + english + math;
    printf("%d\n", sum);
    printf("%d\n", sum/3);
}