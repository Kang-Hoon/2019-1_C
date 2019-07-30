/*
FIle : OOO.c
Description : 이 소스코드는 scanf를 테스트하기 위한 것입니다.
Author : Lee Kang-Hoon
Date : 14/APR/2019
*/

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    printf("숫자 3개와 문자를 입력하세요. \n")
    scanf("%d%d%d %c", &a, &b, &c);
    printf("%a %c %d", a, b, c);

    printf("%c \n", 'a');           
    printf("%0c \n", 'a');                 
    printf("^^^^^^^^^^ \n");        

    return 0;
}