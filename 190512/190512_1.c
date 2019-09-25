/* 이 프로그램은 5자리 정수 중에서 일의 자리, 십의 자리, 백의 자리, 천의 자리를 추출하기 위한 것입니다.
    작성자 : 이강훈
    작성일 : 2019년 5월 12일
*/

#include <stdio.h>

int sum4dig (int num);
int prod4dig (int num);
int first (int num);
int second (int num);
int third (int num);
int forth (int num);

int main (void)
{
    int number;
    int sum;
    int prod;

    printf("Enter an 5 digit integer : \n");
    scanf("%d", &number);

    sum = sum4dig (number);
    prod = prod4dig (number);
    printf("Sum of first 4 digit is : %d \n", sum);
    printf("Product of first 4 digit is : %d \n", prod);
  
    printf(" \n Least Significant Digit is: %d \n", first(number));

    return 0;
}   //  main 함수 끝 

int sum4dig (int number)
{
    int result_sum;
    result_sum = first(number) + second(number) + third(number) + forth(number);
    return result_sum;
}

int prod4dig (int number)
{
    int result_prod;
    result_prod = first(number) * second(number) * third(number) * forth(number);
    return result_prod;
}


int first (int num)
{
    return (num % 10);
}   //  first   끝

int second (int num)
{
    int result;

    result = (num/10) % 10;
    return result;
}   //  second  끝

int third (int num)
{
    int result;

    result = (num/100) % 10;
    return result;
}   //  third   끝

int forth (int num)
{
    int result;

    result = (num/1000) % 10;
    return result;
}   //  forth   끝