/* 
    author : Lee Kang-Hoon
    date : 26 May 2019
*/

#include <stdio.h>

char scoreToGrade (int score);

int main (void)
{
    int score;
    char grade;

    printf("Enter the test score (0-100) : ");
    scanf("%d", &score);

    grade = scoreToGrade (score);
    printf("The grade is : %c \n", grade);

    return 0;
}

char scoreToGrade (int score)
{
    char grade;
    int temp;

    temp = score/10;

    switch (temp)
    {
        case 10 :
        case 9  : grade = 'A';
            break;
        case 8  : grade = 'B';
            break;
        case 7  : grade = 'C';
            break;
        case 6  : grade = 'D';
            break;
        default : grade = 'F';
    }
    return grade;
}