/* 이 소스코드는 cast operator (캐스트 연산자) 을(를) 테스트하기 위한 것입니다. */

#include <stdio.h>

int main(void)
{
    int a = 10;
    float b = 7.6;
    char c;
    int d;
    int e;
  //  char f;

    printf("value of a is %d %f \n",a, a);

    printf("value of b is %d %f \n",b, b);

    printf("integer part of b is %d \n", (int)b);

    printf("franction number of b is %f \n\n", (b - 7));

    printf("%3d \n", 1456);

    printf("%4d \n", 1456);
    
    printf("%05d \n\n"), 1456;

    scanf("1자리 숫자를 입력하세요. %d \n",&d);
 
    printf("당신이 입력한 수는 %d 입니다. \n",d);   

    scanf("1자리 숫자를 다시 입력하세요. %d \n",&e);

    printf("당신이 다시 입력한 수는 %d 입니다.\n",d);

    scanf("%c",&c);

    printf("%c \n",f);

    return 0;
}