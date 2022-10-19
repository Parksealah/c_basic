#include <stdio.h>

int main(vaid) {
    int num1 = 20, num2 = 10, num3 = 50;
    int temp;
    //정렬 : num1 > num2 > num3 (if체인으로 하면 실행X-> 각각 체크해야 한다)
    // 조건1 : num1 < num2 -> 값 교환  : num1 > num2
    // 조건2 : num1 < num3 -> 값 교환  : num1 > num2, nnum3
    // 조건3 : num2 < num3 -> 값 교환  : num2 > num3
    //-> num1 > num2 > num3

    if(num1 < num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
    }
    if(num1 < num3) { //swap
    temp = num1;
    num1 = num3;
    num3 = temp;
    }
    if(num2 < num3) {
    temp = num2;
    num2 = num3;
    num3 = temp;
    }

    printf("%d > %d > %d", num1, num2, num3); //시험 범위 여기 까지
}