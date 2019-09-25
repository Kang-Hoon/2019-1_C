/* 
    사용자 정의 함수를 위한 프로그램입니다.
    Author  :    Lee Kang-Hoon
    Date    :    06 JUN 2019
*/

#include <stdio.h>

void printOne (int x);

int main (void)
{
    int a;

    a = 5;
    printOne (a);

    a = 33;
    printOne (a);

    return 0;
    // main
}

void printOne (int x)
{
    printf("%d \n",x);
    return;
}
