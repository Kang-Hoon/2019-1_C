/* 
    사용자 정의 함수를 위한 프로그램입니다.
    Author  :    Lee Kang-Hoon
    Date    :    06 JUN 2019
*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    bool a = true;
    bool b = true;
    bool c = false;

    printf("    %2d AND     %2d : %2d \n", a, b, a&&b);
    printf("    %2d AND     %2d : %2d \n", a, c, a&&b);
    printf("    %2d AND     %2d : %2d \n", c, a, a&&b);

    printf("    %2d AND     %2d : %2d \n", a, b, a );
    printf("    %2d AND     %2d : %2d \n", a, b, a );
}