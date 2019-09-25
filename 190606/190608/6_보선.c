#include <stdio.h>

char scoreToGrade (int score);
char option (int score);

int main(void)
{
    int score;
    int i = 0;
    char grade;
    char postfix;

    while (i < 10)
    {
        printf("Enter the test score (0-100):");
        scanf_s("%d", &score);
        postfix = option(score);
        grade = scoreToGrade(score);
        printf("The grade is: %c%c\n", grade,postfix);
        i++;
    }
    return 0;
}

char scoreToGrade (int score)
{
    char grade; 
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';
    return grade;
}
char option (int score)
{
    int temp;
    char postfix;
    temp = score % 10 / 5;
    if (temp == 0)
        postfix = '0';
    else if (temp == 1)
        postfix = '+';
    if (score == 100)
        postfix = '+';
    if (score<60)
        postfix = ' ';
    return postfix;
}
