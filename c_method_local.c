#include<stdio.h>

/**
 * 지역 변수 와 전역 변수
 *  - 지역변수느 범위가 함수 내, 즉 일정 지역네서만 사용하는 변수
 *  - 지역변수는 사용범위가 블록{} 내로 제한,다른 함수 사용불가
 *  - 지역 변수는 이름이 같아도 선언된 함수가 다르면 각각 독립된 공간
 *  - 함수가 다 사용되고 반환되면 지역 변수의공간 자동으로 회수
 *  - 함구의 매개변수(parameters)는 지역변수
*/
int a = 50; //전역변수: 어디서든지 사용 가능!

int main (void){
    int a = 1,b = 2;
    printf ("%d",a); //사용할수있는 변수가 2개 이상인 경우(a값이 두가지)에는 가장 가까운 변수(a=1)가 사용됨
    int result;
    // int a = 5;//Error (똑같은 이름 변수를 중복 선언 x)
    printf("뎃셈 : &d", sum(a,b));

}
int sum (int x, int y){
    int result; //함수 네에서 선언 된 변수 (지역변수)
    result = x + y;
    return result;

}