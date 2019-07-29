/* 이 소스코드는 플래그 타입과 scanf를 테스트하기 위한 것입니다. */

#include <stdio.h>


 int main(void)
 {
     printf("Hello World! \n\n");
     printf("%8.2f｜%8.2f \n", 1.3,2.4);    // 일반적인 8.2f
     printf("^^^^^^^^^^ \n");
     printf("%8.3f \n", 1.3);    // 8.3f 가능>?
     printf("%8.4f \n", 1.3);    // 8.4f 가능>?
     printf("^^^^^^^^^^ \n\n");

     printf("%2d \n", 987);                 //  987 출력할 시 %2d 3자리 중 2자리 출력
     printf("%3d \n", 987);                 //  987 출력할 시 %2d 3자리 중 3자리 출력
     printf("%4d \n\n", 987);               //  987 출력할 시 %2d 3자리 중 4자리 출력

     printf("%2d \n", 987);                 //  987 출력할 시 %2d 3자리 중 2자리 출력
     printf("%3d \n", 987);                 //  987 출력할 시 %2d 3자리 중 3자리 출력
     printf("%4d \n", 987);                 //  987 출력할 시 %2d 3자리 중 4자리 출력 + 0패딩 시험
     printf("%0+4d \n", 987);               //  987 출력할 시 %2d 3자리 중 4자리 출력 + 0패딩 시험
     printf("%0+5d \n\n", 987);             //  987 출력할 시 %2d 3자리 중 5자리 출력 + 0패딩 시험

     printf("%0+8.2f \n", 123.456);         // 0 padding
     printf("%0-8.2f \n", 123.456);         // 0 padding     
     printf("%-0-8.3f \n", 123.456);        // 0 padding + 좌로정렬 + 음수
     printf("%0-+8.3f \n\n", 123.456);      // 0 padding + 좌로정렬 + 양수

     printf("%0+-8.2f \n", 123.45);         // 0 padding + 우로정렬 + 음수
     printf("^^^^^^^^^^ \n");
     printf("%0+-8.3f \n", 123.45);         // 0 padding + 우로정렬 + 음수
     printf("^^^^^^^^^^ \n");
     printf("%0+-8.4f \n", 123.45);         // 0 padding + 우로정렬 + 음수
     printf("^^^^^^^^^^ \n");

     return 0;
 }