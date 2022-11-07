#include<stdio.h>

/**
 * break & continue 문
 *  - 반복문에서 주로 사용
 *  -break : 즉시 반복문을 빠저 나가라
 *         -> 이후로 반복문 실행 X
 *  - continue : 즉시 다음 반복으로 넘어가라 (ex 아래의 함수에서 짝수는 continue를 만나 실행 X)
 *          ->이후로 반복문 실행 o
*/
int main(void){
    for(int i=1; i<=10; i++){
        if(i % 2 == 0){
            continue;
        }
        if(i == 7){
            break;
        }
        printf ("%d\n", i);
    }

}