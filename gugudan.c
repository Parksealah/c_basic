#include<stdio.h>

/**
 * 구구단 2단 출력
 * 2 X 1 = 2
 * 2 X 2 = 4
 * 2 X 3 = 6
 * 2 X 4 = 8
 * ...
 * 2 X 9 = 18
*/

int main (void) {
    for(int i = 1; i <= 9; i++) {  //마지막 i값은 9가 아닌 10이다.
    printf ("2 X %d = %d\n", i, 2*i);
    }

}