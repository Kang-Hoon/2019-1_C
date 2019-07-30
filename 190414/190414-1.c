/*
FIle : OOO.c
Description : \+ 에 관련된 기능들을 알아보기 위한 소스코드입니다.
Author : Lee Kang-Hoon
Date : 14/APR/2019
*/

#include <stdio.h>

int main(void)
{
    printf("Hello there World!! \n");   
    printf("\\ {} \n\n\n \n");          // \\를 두개 입력하면 '\'가 출력된다.
    printf("1. KH\nKH \n");             // \n = 줄바꿈 태그
    printf("2. KH\tKH \n");             // \t = 수평 탭
    printf("3. KH\vKH \n");             // \v = 수직 탭
    printf("4. KH\bKH \n");             // \b = 백슬래시
    printf("5. KH\fKH \n");             // \f = 
    printf("6. KH\aKH \n");             // \a = 
    printf("7. \0 \n");                 // \0 = 

    return 0;
}