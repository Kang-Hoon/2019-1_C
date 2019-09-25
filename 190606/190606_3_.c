/* 
    사용자 정의 함수를 위한 프로그램입니다.
    Author  :    Lee Kang-Hoon
    Date    :    06 JUN 2019
*/

#include <stdio.h>

int firstDigit (int num);

int main (void)
{
    int number;
    int digit;

    printf("Enter an integer :  ");
    scanf("%d \n", &number);

    digit = firstDigit (number);
    printf("Least siginificant digit is : %d \n", digit);

    return 0;
}

int firstDigit (int num)
{
    return (num % 10);
}