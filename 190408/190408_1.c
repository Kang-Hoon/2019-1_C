/* 이 소스코드는 플래그 타입과 scanf를 테스트하기 위한 것입니다. */

#include <stdio.h>


 int main(void)
 {
     printf("Hello World! \n");
     printf("%8.2f %8.2f \n", 1.3, 2.4);    // 일반적인 8.2f
     printf("%8.3f %8.4f \n", 1.3, 1.3);    // 8.3f 8.4f 가능>?
     printf("%2d \n", 987);                 //  987 출력할 시 %2d 3자리 중 2자리 출력
     printf("%3d \n", 987);                 //  987 출력할 시 %2d 3자리 중 3자리 출력
     printf("%4d \n", 987);                 //  987 출력할 시 %2d 3자리 중 4자리 출력

     printf("%08.2f \n");                // 0 padding




     return 0;
 }