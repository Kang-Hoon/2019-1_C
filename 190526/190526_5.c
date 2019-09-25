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
    float temp;

    temp = score/10.0;

    switch (temp)
    {
        case temp>9.5  : grade = 'A+';
            break;
        case temp>9.0  : grade = 'Ao';
            break;
        case temp>8.5  : grade = 'B+';
            break;
        case temp>8.0  : grade = 'Bo';
            break;
        case temp>7.5  : grade = 'C+';
            break;
        case temp>7.0  : grade = 'Co';
            break;
        case temp>6.5  : grade = 'D+';
            break;
        case temp>6.0  : grade = 'Do';
            break;
        default : grade = 'F';
    }
    return grade;
}