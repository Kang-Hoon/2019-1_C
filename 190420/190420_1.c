/* 중간고사 빡시게 잘봅시다 */

#include <stdio.h>

int main(void)
{
    int age;
    int k;
    char n;
    printf("My name is Lee Kang-Hoon \n");
    printf("Enter your age. \n");
    scanf("%d", &age);

    printf("Your age is %d", age);
    printf("Next year your gonna be %d \n.", (age+1));

    printf("Your age is %d", age);
    printf("Next year your gonna be %d \t. \n", (age+1));

    printf("Your age is %d", age);
    printf("Next year your gonna be %d \v.", (age+1));
    return 0;

}