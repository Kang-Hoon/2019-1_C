/*
FIle : OOO.c
Description : 이 소스코드는 scanf를 테스트하기 위한 것입니다.
Author : Lee Kang-Hoon
Date : 14/APR/2019
*/

#include <stdio.h>

int main(void)
{
    int e;
    int f;
    int g;
    char h;
    printf("Enter 3 Integers and 1 Character. \n");
    scanf("%d%d%d%c", &e, &f, &g, &h);      
                    // %d와 %c를 붙여서 입력받으면 아예 문자를 무시해버린다
    printf("%d %d %d %c \n\n", e, f, g, h);

    printf("Enter 3 Integers and 1 Character. \n");
    scanf("%d%d%d %c", &e, &f, &g, &h);
    printf("%d %d %d %c \n\n", e, f, g, h);

    int a;
    int b;
    int c;
    int sum;

    printf("숫자 3개를 입력하세요. \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%a %b %c  \n", a, b, c);
    sum = a + b + c;
    printf("%d = %d + %d + %d \n\n", sum, a, b, c);

    printf("%c \n", 'a');           
    printf("%0c \n\n", 'a');                       

    return 0;
}