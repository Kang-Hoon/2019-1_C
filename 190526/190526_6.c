/* 
    author : Lee Kang-Hoon
    date : 26 May 2019
*/

#include <stdio.h>

char scoreToGrade (int score);
char signToGrade (int temp);

int main (void)
{
    int score;
    char grade;
    char signplus;

    printf("Enter the test score (0-100) : ");
    scanf("%d", &score);

    grade = scoreToGrade (score);
    signplus = signToGrade (score);
    printf("The grade is : %c%c \n", grade,signplus);

    return 0;
}

char scoreToGrade (int score)
{
    char grade;
    int secd;

    secd = score/10;

    switch (secd)
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

char signToGrade (int score)
{
    char signplus;
    int temp;

    temp = score%10;

    switch (temp)
    {
        case 9: signplus = '+';
            break;
        case 8: signplus = '+';
            break;
        case 7: signplus = '+';
            break;    
        case 6: signplus = '+';
            break;
        case 5: signplus = '+';
            break;  
        default: signplus = '0';
            break;
    }
    return signplus;
}