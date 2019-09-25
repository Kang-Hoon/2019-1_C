/* 
    Author  :    Lee Kang-Hoon
    Date    :    06 JUN 2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int multiply (int num1, int num2);

int main (void)
{
    int multiplier;
    int multiplicand;
    int product;
    int minho;
// Statements
    printf("");
    scanf("%d %d", &multiplier, &multiplicand);

    product = multiply(multiplier, multiplicand);

    printf("Product of %d and %d is %d \n", multiplier, multiplicand, product);
    // return 0;
    // return ----- ;

    

    minho = multiply(2,4);
    printf("%d", multiply(2,4));

    // main
    return 0;
}

int multiply (int num1, int num2)
{
    return (num1 * num2);
}
