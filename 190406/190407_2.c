/* 이 프로그램은 4개의 입력값에 대한 곱을 구하기 위한것입니다.
    Author : Kang-Hoon Lee
    Date : 07 APR 2019 */

#include <stdio.h>


int main (void)
{

    int a;
    int b;
    int c;
    int d;
    int product;

    printf("\n 이 프로그램은 4개의 입력값에 대한 곱을 구해줍니다.")
    printf("\n 4개의 값을 입력하시오. \n");
    printf("a b c d \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    product = a * b * c * d;
    printf("4개의 입력값의 곱은 %d 입니다", product);
    return 0;
}
