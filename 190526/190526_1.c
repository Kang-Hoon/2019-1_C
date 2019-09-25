/* 
    author : Lee Kang-Hoon
    date : 26 May 2019
*/

#include <stdio.h>

char plus (int score);

int main (void)
{
    int score;
    char plus;
    
    scanf("ENTER YOUR SCORE : %d \n", &score);
    if ((score/10) >= 9)
        {
        if ((score%10)>=5)
            printf("Your score is A %c", plus);
        else
            printf("Your score is A %c", plus);
        }
    else if ((score/10) >= 8)
        {
        if (score%10) >= 5
            printf("Your score is B %c", plus);
        else 
            printf("Your score is B %c", plus);
        }
    else if ((score/10) >= 7)
        {
        if (score%10) >= 5
            printf("Your score is C %c", plus);
        else
            printf("Your score is C %c", plus);
        }
    else if ((score/10) >= 6)
        {
        if (score%10) >= 5
            printf("Your score is D %c", plus);
        else
            printf("Your score is D %c", plus);
        }
    else 
        printf("Your score is F");
    return 0;
}

char plus (int score)
{
    if ((score%10) >=5)
        plus = '+';
    else
        plus = '0';
}