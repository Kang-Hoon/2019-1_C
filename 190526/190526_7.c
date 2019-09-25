/* 
    author : Lee Kang-Hoon
    date : 26 May 2019
*/

#include <stdio.h>

char signplus (int score);

int main (void)
{
    int score;
    char plus;
    
    printf("ENTER YOUR SCORE : ");
    scanf("%d \n", &score);
    if ((score/10) >= 9)
            printf("Your score is A %c", plus);
    else if ((score/10) >= 8)
            printf("Your score is B %c", plus);
    else if ((score/10) >= 7)
            printf("Your score is C %c", plus);
    else if ((score/10) >= 6)
            printf("Your score is D %c", plus);
    else 
        printf("Your score is F");
    return 0;
}

char signplus (int score)
{
    char plus;

    if ((score%10) >=5)
        plus = '+';
    else
        plus = '0';
    
    return plus;
}